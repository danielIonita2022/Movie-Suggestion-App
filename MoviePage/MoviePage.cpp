#include "MoviePage.h"
#include <regex>
MoviePage::MoviePage(LogIn* logger) :
	m_logger(logger)
{
}
void MoviePage::ShowDetails()
{
	std::cout << "Search a movie/TV-show: ";
	std::string title;
	std::getline(std::cin >> std::ws, title);
	bool ok;
	m_movieList = getMovies(title, ok);
	if (!m_movieList.empty()) 
	{
		std::cout << "Choose the movie/TV-show from the available results: \n";
		int movieNumber = -1;
		for (const auto& movie : m_movieList)
		{
			++movieNumber;
			std::cout << movie.m_title << " -> SELECT WITH: " << movieNumber << '\n';
		}
		int chosenMovieNumber = -1;
		std::cin >> chosenMovieNumber;
		Movie movie = m_movieList.at(chosenMovieNumber);
		std::cout << movie;
		std::cout << "Have you seen this movie/TV-show?\n";
		std::cout << "Press 1 for YES and 0 for NO.\n";
		uint16_t character;
		std::cin >> character;
		if (character == 1)
		{
			std::cout << "Have you liked this movie/TV-show?\n";
			std::cout << "Press 1 for YES and 0 for NO.\n";
			bool like;
			std::cin >> like;
			std::string userName = m_logger->GetLogInUN();
			Seen newSeen(-1, userName, title, like);
		}
		else
		{
			std::cout << "Do you want to add this movie to your Wishlist?\n";
			std::cout << "Press 1 for YES and 0 for NO.\n";
			uint16_t character;
			std::cin >> character;
			if (character == 1)
			{
				std::string userName = m_logger->GetLogInUN();
				Wishlist newWish(-1, userName, title);
			}
		}
	}
}
int countWordsRegex(const std::string& name)
{
	std::regex regex("(\\w+)|(:)");
	auto wordsBegin = std::sregex_iterator(name.begin(), name.end(), regex);
	auto wordsEnd = std::sregex_iterator();
	return std::distance(wordsBegin, wordsEnd);
}
std::string::iterator findPosOfLastWord(std::string& name)
{
	for (std::string::iterator pos = name.end() - 1; pos != name.begin(); --pos)
	{
		if (!isalnum(*pos))
			return pos;
	}
}
void deleteLastWord(std::string& name)
{
	name.erase(findPosOfLastWord(name), name.end());
}
std::vector<Movie> MoviePage::getMovies(const std::string& name)
{
	auto table = Storages::getInstance()->getMovieStorage();
	std::vector<Movie> allMovies;
	std::string incompleteName = name;
	allMovies = table.get_all<Movie>(sqlite_orm::where
	(sqlite_orm::like((&Movie::m_title), name)));

	int nrWords = countWordsRegex(name);
	if (nrWords > 1)
	{
		for (int count = 1; count < nrWords; ++count)
		{
			deleteLastWord(incompleteName);
			if (incompleteName.empty())
			{
				break;
			}
			std::vector <Movie> movie = table.get_all<Movie>(sqlite_orm::where
			(sqlite_orm::like((&Movie::m_title), incompleteName)));
			if (!movie.empty())
			{
				allMovies.push_back(movie[0]);
			}
		}
	}
	if (allMovies.empty())
	{
		std::cout << "The search query returned no results!\n";
		return allMovies;
	}
	return allMovies;
}
void MoviePage::ShowSimilar(Movie movie)
{
	int number = 10;
	auto table = Storages::getInstance()->getMovieStorage();
	std::vector<Movie> allMovies;
	allMovies = table.get_all<Movie>(sqlite_orm::where
	(sqlite_orm::like((&Movie::m_type), movie.m_type)));
	std::cout << "The recomandations similar with the type are: \n";
	for (const auto& film : allMovies)
	{
		if (number > 0)
		{
			std::cout << film.m_title << '\n';
		}
		else break;
		number--;
	}
}
