#pragma once
#pragma warning(disable : 4996)
#include "Movie.h"
#include <sqlite_orm/sqlite_orm.h>
#include "App.h"

class MoviePage
{
private:
	std::vector<Movie> m_movieList;
	std::shared_ptr<LogIn> m_logger;
public:

	MoviePage(std::shared_ptr<LogIn> logger);
	void ShowDetails();
	void ShowSimilar(Movie movie);
	std::vector<Movie> getMovies(const std::string& name);
};