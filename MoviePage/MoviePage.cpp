#include "MoviePage.h"
#include <regex>
MoviePage::MoviePage(App* app):
	m_app(app)
{
}
void MoviePage::ShowDetails()
{
	std::cout << "Search a movie or TV-show by name: ";
	std::string title;
	std::getline(std::cin, title);
	m_movies = getMovies(title);
	for (const auto& movie : m_movies)
	{
		std::cout << '\n' << movie.m_type << '\n';
		std::cout << movie.m_title << '\n';
		std::cout << movie.m_director << '\n';
		std::cout << movie.m_cast << '\n';
		std::cout << movie.m_country << '\n';
		std::cout << movie.m_dateAdded << '\n';
		std::cout << movie.m_releaseYear << '\n';
		std::cout << movie.m_rating << '\n';
		std::cout << movie.m_duration << '\n';
		std::cout << movie.m_listedIn << '\n';
		std::cout << movie.m_description << '\n';
	}
	std::cout << "Have you seen this movie/TV-show?\n";
	std::cout << "Press 1 for YES and 0 for NO.\n";
	uint16_t character;
	std::cin >> character;
	if (character == 1)
	{
		Seen newSeen(-1, m_app->getCurrentUser().GetUserName(), title);
	}
	else
	{
		std::cout << "Do you want to add this movie to your Wishlist?\n";
		std::cout << "Press 1 for YES and 0 for NO.\n";
		uint16_t character;
		std::cin >> character;
		if (character == 1)
		{
			Wishlist newWish(-1,m_app->getCurrentUser().GetUserName(),title);
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
			if (incompleteName.empty()) break;
			std::vector <Movie> movie = table.get_all<Movie>(sqlite_orm::where
			(sqlite_orm::like((&Movie::m_title), incompleteName)));
			if (!movie.empty())
			{
				allMovies.push_back(movie[0]);
			}
		}
	}
	if (allMovies.empty())
		std::cout << "The search query returned no results!\n";
	return allMovies;
}