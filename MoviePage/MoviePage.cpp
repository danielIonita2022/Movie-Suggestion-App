#include "MoviePage.h"
#include <regex>
MoviePage::MoviePage(LogIn* logger) :
	m_logger(logger)
{
}
void MoviePage::ShowDetails()
{
	std::cout << "Cautati un film sau serial dupa titlu: ";
	std::string title;
	std::getline(std::cin, title);
	//am modificat cu ok pt ca imi trb mie in meniu
	bool ok;
	m_movies = getMovies(title, ok);
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
std::vector<Movie> MoviePage::getMovies(const std::string& name, bool& ok)
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
		ok = 0;
	}
	ok = 1;
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
