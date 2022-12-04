#pragma once
#pragma warning(disable : 4996)
#include "Movie.h"
#include <sqlite_orm/sqlite_orm.h>
#include "App.h"

class MoviePage
{
private:
	std::vector<Movie> m_movies;
	App* m_app;
public:

	MoviePage(App* app);
	void ShowDetails();
	void ShowSimilar(Movie movie);
	std::vector<Movie> getMovies(const std::string& name);
};