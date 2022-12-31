#pragma once
#include "Storages.h"
#include "Movie.h"
#include "User.h"
#include "Seen.h"
#include <vector>
#include <unordered_set>
#include <random>
#include <time.h>
#include <algorithm>

class RecommendedPage
{
public:
	enum class genres
	{
		drama = 0,
		action = 1,
		SF = 2,
		comedy = 3,
		thriller = 4,
		fantasy = 5,
		animation = 6,
		horror = 7,
		romance = 8,
		mistery = 9,
		adventure = 10
	};

	inline RecommendedPage(const User& currentUser) :
		m_currentUser{ currentUser }
	{
	}

	uint16_t maxim(std::array<uint16_t, 11> arr, uint16_t& mx);
	uint16_t position(std::array<uint16_t, 11> arr, uint16_t mx, uint16_t& poz);
	bool validation(std::string recomandare, std::array<std::string, 10> titluri);
	std::vector<Movie> getAllMovies(std::vector<Movie> movies, std::string gen);
	std::vector<Movie>recommendWishlistMovies();
	std::vector<Movie>recommendSeenMovies();
	void printRecommendation();


	~RecommendedPage() = default;
private:
	User m_currentUser;
};

inline uint16_t RecommendedPage::maxim(std::array<uint16_t, 11> arr, uint16_t& mx)
{
	mx = 0;
	for (int i = 0; i < 11; i++)
	{
		mx = std::max(arr[i], mx);
	}
	return mx;
}

inline uint16_t RecommendedPage::position(std::array<uint16_t, 11> arr, uint16_t mx, uint16_t& poz)
{
	mx = maxim(arr, mx);
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == mx)
		{
			poz = i;
			return poz;
		}
	}
	return -1;
}

inline bool RecommendedPage::validation(std::string recomandare, std::array<std::string, 10> titluri)
{
	for (int i = 0; i < titluri.size(); i++)
	{
		if (recomandare == titluri[i]) return 0;
	}
	return 1;
}

inline std::vector<Movie> RecommendedPage::getAllMovies(std::vector<Movie> movies, std::string gen)
{
	std::vector<Movie> allMovies;
	for (int i = 0; i < movies.size(); i++)
	{
		if (movies[i].m_listedIn.find(gen) != std::string::npos)
		{
			allMovies.emplace_back(movies[i]);
		}
	}
	return allMovies;
}

inline std::vector<Movie>RecommendedPage::recommendWishlistMovies()
{

	StorageWishlists tableWishlist = Storages::getInstance().getWishlistStorage();
	using namespace sqlite_orm;
	std::unordered_set<std::string> TypeWishlist;
	auto tableMovies = Storages::getInstance().getMovieStorage();
	std::vector<Movie> allMovies;

	auto objects = tableWishlist.get_all<Wishlist>();
	std::array<uint16_t, 11> types = { 0 };
	std::vector<std::string> enum_str = { "Drama","Action" ,"SF ","Comedy","Thriller" ,
								"Fantasy","Animation","Horror","Romance","Mistery","Adventure" };

	for (const auto& wishlistMovie : objects)
	{
		if (wishlistMovie.m_userName.compare(m_currentUser.GetUserName()))
		{
			std::vector <Movie> movieList = tableMovies.get_all<Movie>(where
			(like((&Movie::m_title), wishlistMovie.m_movieTitle)));

			Movie movie = movieList[0];
			for (int i = 0; i < 11; i++)
			{
				//in type nu e genul filmului
				//to do
				if (movie.m_listedIn.find(enum_str[i]) != std::string::npos)
				{
					types[i]++;
					//break;
				}
			}
			TypeWishlist.insert(movie.m_listedIn);
		}
	}
	//todo:gasit max in types si retin poz maximului, in vect de enum_string la indexul aferent maximului, get all where m_type, enum_str[index_max}
	uint16_t mx = 0;
	uint16_t poz = RecommendedPage::position(types, mx, poz);

	std::vector<Movie>allMoviesFromDataBase = tableMovies.get_all<Movie>();
	allMovies = getAllMovies(allMoviesFromDataBase, enum_str[poz]);
	return allMovies;

}

inline std::vector<Movie>RecommendedPage::recommendSeenMovies()
{
	StorageSeen tableSeen = Storages::getInstance().getSeenStorage();
	using namespace sqlite_orm;
	std::unordered_set<std::string> TypeSeen;
	auto tableMovies = Storages::getInstance().getMovieStorage();
	std::vector<Movie> allMovies;

	auto objects = tableSeen.get_all<Seen>();
	std::array<uint16_t, 11> types = { 0 };
	std::vector<std::string> enum_str = { "Drama","Action" ,"SF ","Comedy","Thriller" ,
								"Fantasy","Animation","Horror","Romance","Mistery","Adventure" };

	for (const auto& seenMovie : objects)
	{
		if (seenMovie.m_userName == m_currentUser.GetUserName() && seenMovie.m_like == 1)
		{
			std::vector <Movie> movieList = tableMovies.get_all<Movie>(where
			(like((&Movie::m_title), seenMovie.m_movieTitle)));

			Movie movie = movieList[0];
			for (int i = 0; i < 11; i++)
			{
				if (movie.m_listedIn.find(enum_str[i]) != std::string::npos)
				{
					types[i]++;
					//break;
				}
			}
			TypeSeen.insert(movie.m_listedIn);
		}
	}
	uint16_t mx = 0;
	uint16_t poz = RecommendedPage::position(types, mx, poz);

	std::vector<Movie>allMoviesFromDataBase = tableMovies.get_all<Movie>();
	allMovies = getAllMovies(allMoviesFromDataBase, enum_str[poz]);

	return allMovies;

}

inline void RecommendedPage::printRecommendation()
{
	std::random_device rd;
	std::mt19937 eng(time(nullptr));

	std::vector<Movie> recommendationsW = RecommendedPage::recommendWishlistMovies();
	std::vector<Movie> recommendationsS = RecommendedPage::recommendSeenMovies();
	//recommendationsW.insert(recommendationsW.end(), recommendationsS.begin(), recommendationsS.end());
	StorageWishlists tableWishlist = Storages::getInstance().getWishlistStorage();
	StorageSeen tableSeen = Storages::getInstance().getSeenStorage();
	int number = 10;
	std::array<std::string, 10> titluriW = { "" };
	std::string recomandareW;
	std::cout << "The recomandations similar with your wishlist movies are: \n";
	while (number != 0)
	{
		std::uniform_int_distribution <int> distr(0, recommendationsW.size() - 1);
		recomandareW = recommendationsW[distr(eng)].m_title;
		if (validation(recomandareW, titluriW) == 1)
			titluriW[10 - number] = recomandareW;
		number--;
	}
	for (const auto& film : titluriW)
	{
		if (tableWishlist.get_pointer<Wishlist>(film) == nullptr
			&& tableSeen.get_pointer<Seen>(film) == nullptr)
		{
			std::cout << film << '\n';
		}
	}
	std::cout << "\nThe recomandations similar with your seen movies are: \n";
	number = 10;
	std::array<std::string, 10> titluriS = { "" };
	std::string recomandareS;
	while (number != 0)
	{
		std::uniform_int_distribution <int> distr(0, recommendationsS.size() - 1);
		recomandareS = recommendationsS[distr(eng)].m_title;
		if (validation(recomandareS, titluriS) == 1)
			titluriS[10 - number] = recomandareS;
		number--;
	}
	for (const auto& film : titluriS)
	{
		if (tableSeen.get_pointer<Seen>(film) == nullptr)
		{
			std::cout << film << '\n';
		}
	}
}