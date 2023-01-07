#pragma once
#pragma warning(disable : 4996)
#include "Movie.h"
#include <sqlite_orm/sqlite_orm.h>
#include "Seen.h"
#include "Wishlist.h"
#include "User.h"
#include "Storages.h"

class MoviePage
{
private:
	std::vector<Movie> m_movieList;
public:

	MoviePage() = default;
	void ShowDetails(User currentUser);
	void ShowSimilar(Movie movie);
	std::vector<Movie> getMovies(const std::string& name);
	
};