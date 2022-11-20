#include "MoviePage.h"

MoviePage::MoviePage(App* app)
{
	this->app = app;
}

std::vector<Movie> MoviePage::getMovie(const std::string& name)
{
	auto table = app->getStorage();
	auto movie = table.get_all<Movie>(
		sqlite_orm::where(sqlite_orm::is_equal(&Movie::m_title, name)));
	return movie;
}