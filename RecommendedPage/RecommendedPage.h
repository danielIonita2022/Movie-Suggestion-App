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
	
	~RecommendedPage() = default;
private:
	User m_currentUser;
};