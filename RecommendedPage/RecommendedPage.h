#pragma once
#include "Storages.h"
#include "Movie.h"
#include "User.h"
#include "Seen.h"
#include <vector>
#include <unordered_set>


class RecommendedPage
{
public:

	inline RecommendedPage(const User& currentUser) :
		m_currentUser{ currentUser }
	{
	}

	uint16_t maxim(std::array<uint16_t, 11> arr, uint16_t& mx);
	uint16_t position(std::array<uint16_t, 11> arr, uint16_t mx, uint16_t& poz);
	bool validation(std::string recomandare, std::array<std::string, 10> titluri);

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

inline std::vector<Movie> RecommendedPage::recommendWishlistMovies()
{

	StorageWishlists tableWishlist = Storages::getInstance().getWishlistStorage();
	using namespace sqlite_orm;
	std::unordered_set<std::string> TypeWishlist;
	auto tableMovies = Storages::getInstance().getMovieStorage();
	std::vector<Movie> allMovies;

	auto objects = tableWishlist.get_all<Wishlist>();

	for (const auto& wishlistMovie : objects)
	{
		if (wishlistMovie.m_userName == m_currentUser.GetUserName())
		{
			std::vector <Movie> movieList = tableMovies.get_all<Movie>(where
			(like((&Movie::m_title), wishlistMovie.m_movieTitle)));

			Movie movie = movieList[0];
			TypeWishlist.insert(movie.m_type);
		}
	}
	for (const auto& type : TypeWishlist)
	{
		allMovies = tableMovies.get_all<Movie>(where(like((&Movie::m_type), type)));
	}
	return allMovies;

}

inline std::vector<Movie> RecommendedPage::recommendSeenMovies() 
{

	StorageSeen tableSeen = Storages::getInstance().getSeenStorage();
	using namespace sqlite_orm;
	std::unordered_set<std::string> TypeSeen;
	auto tableMovies = Storages::getInstance().getMovieStorage();
	std::vector<Movie> allMovies;

	auto objects = tableSeen.get_all<Seen>();

	for (const auto& seenMovie : objects)
	{
		if (seenMovie.m_userName == m_currentUser.GetUserName() && seenMovie.m_like == 1)
		{
			std::vector <Movie> movieList = tableMovies.get_all<Movie>(where
			(like((&Movie::m_title), seenMovie.m_movieTitle)));

			Movie movie = movieList[0];
			TypeSeen.insert(movie.m_type);
		}
	}
	for (const auto& type : TypeSeen)
	{
		allMovies = tableMovies.get_all<Movie>(where(like((&Movie::m_type), type)));
	}
	return allMovies;

}

inline void RecommendedPage::printRecommendation()
{
	std::vector<Movie> recommendationsW = RecommendedPage::recommendWishlistMovies();
	std::vector<Movie> recommendationsS = RecommendedPage::recommendSeenMovies();
	recommendationsW.insert(recommendationsW.end(), recommendationsS.begin(), recommendationsS.end());
	StorageWishlists tableWishlist = Storages::getInstance().getWishlistStorage();
	StorageSeen tableSeen = Storages::getInstance().getSeenStorage();
	int number = 10;
	std::cout << "The recomandations similar with your wishlist movies are: \n";
	for (const auto& film : recommendationsW)
	{
		if (number > 0)
		{
			if (tableWishlist.get_pointer<Wishlist>(film.m_title) == nullptr
				&& tableSeen.get_pointer<Seen>(film.m_title) == nullptr)
			{
				std::cout << film.m_title << '\n';
				number--;
			}
		}
		else break;
	}
	std::cout << "\nThe recomandations similar with your seen movies are: \n";
	number = 10;
	for (const auto& film : recommendationsS)
	{
		if (number > 0)
		{
			if (tableSeen.get_pointer<Seen>(film.m_title) == nullptr)
			{
				std::cout << film.m_title << '\n';
				number--;
			}
		}
		else break;
	}
}