#pragma once
#pragma warning(disable : 4996)
#include "Movie.h"
#include <sqlite_orm/sqlite_orm.h>
#include "App.h"

class MoviePage
{
private:
	App* app;
	std::vector<Movie> movie;
public:

	MoviePage(App* app);
	void ShowDetails();
	std::vector<Movie> getMovie(const std::string& name);
};