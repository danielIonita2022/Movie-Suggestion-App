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

	inline std::vector<Movie> recommendWishlistMovies() const
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

	inline std::vector<Movie> recommendSeenMovies() const
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

	inline void printRecommandation()
	{
		std::vector<Movie> recommendationsW = recommendWishlistMovies();
		std::vector<Movie> recommendationsS = recommendSeenMovies();
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
		
	}


	~RecommendedPage() = default;
private:
	User m_currentUser;
};