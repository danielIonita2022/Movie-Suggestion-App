#include "MoviePage.h"
#include <regex>
#include <random>
#include <time.h>
void MoviePage::ShowDetails(User currentUser)
{
	std::cout << "Search a movie/TV-show: ";
	std::string title;
	std::getline(std::cin >> std::ws, title);
	m_movieList = getMovies(title);
	if (!m_movieList.empty())
	{
		std::cout << "Choose the movie/TV-show from the available results: \n";
		int movieNumber = -1;
		for (const auto& movie : m_movieList)
		{
			++movieNumber;
			std::cout << movie.m_title << " -> SELECT THE MOVIE WITH: [" << movieNumber <<"] "<< '\n';
		}
		int chosenMovieNumber = -1;
		std::cin >> chosenMovieNumber;
		Movie movie = m_movieList.at(chosenMovieNumber);
		//std::cout << movie;
		std::cout << "\nHave you seen this movie/TV-show?\n";
		std::cout << "Press [ 1 ] for YES and [ 0 ] for NO.\n";
		uint16_t character;
		std::cin >> character;
		if (character == 1)
		{
			std::unique_ptr<Seen> film;
			Storages::DB table = Storages::getStorage();
			film = table.get_pointer<Seen>(movie.m_title);
			if (film == nullptr)
			{
				std::cout << "Have you liked this movie/TV-show?\n";
				std::cout << "Press [ 1 ] for YES and [ 0 ] for NO.\n";
				bool like;
				std::cin >> like;
				std::string userName = currentUser.GetUserName();
				Seen newSeen(-1, userName, title, like);
			}
		}

		else
		{
			std::unique_ptr<Wishlist> film;
			Storages::DB table = Storages::getStorage();
			film = table.get_pointer<Wishlist>(movie.m_title);
			if (film == nullptr)
			{
				std::cout << "\Do you want to add this movie to your Wishlist?\n";
				std::cout << "Press [ 1 ] for YES and [ 0 ] for NO.\n";
				uint16_t character;
				std::cin >> character;
				if (character == 1)
				{
					std::string userName = currentUser.GetUserName();
					Wishlist newWish(-1, userName, title);
				}
			}
		}
		ShowSimilar(movie);
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
	Storages::DB table = Storages::getStorage();
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
	std::random_device rd;
	std::mt19937 eng(std::time(nullptr));
	int number = 10;
	std::string recomandareSearch;
	std::array<std::string, 10> titluriSearch = { "" };
	Storages::DB table = Storages::getStorage();
	std::vector<Movie> allMovies;
	allMovies = table.get_all<Movie>(sqlite_orm::where
	(sqlite_orm::like((&Movie::m_type), movie.m_type)));
	std::cout << "\nThe recomandations similar with the type (movies/series) are: \n";
	while (number != 0)
	{
		std::uniform_int_distribution <int> distr(0, allMovies.size() - 1);
		recomandareSearch = allMovies[distr(eng)].m_title;
		titluriSearch[10 - number] = recomandareSearch;
		number--;
	}
	for (const auto& film : titluriSearch)
	{
		std::cout << film << '\n';
	}
		
}
