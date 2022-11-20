#include "MoviePage.h"

MoviePage::MoviePage(App* app)
{
	this->app = app;
}
void MoviePage::ShowDetails(const std::string& title)
{
	movie = getMovie(title);
	std::cout << movie[0].m_type << '\n';
	std::cout << movie[0].m_title << '\n';
	std::cout << movie[0].m_director << '\n';
	std::cout << movie[0].m_cast << '\n';
	std::cout << movie[0].m_country << '\n';
	std::cout << movie[0].m_dateAdded << '\n';
	std::cout << movie[0].m_releaseYear << '\n';
	std::cout << movie[0].m_rating << '\n';
	std::cout << movie[0].m_duration << '\n';
	std::cout << movie[0].m_listedIn << '\n';
	std::cout << movie[0].m_description << '\n';

}

std::vector<Movie> MoviePage::getMovie(const std::string& name)
{
	auto table = app->getStorage();
	auto movie = table.get_all<Movie>(
		sqlite_orm::where(sqlite_orm::is_equal(&Movie::m_title, name)));
	return movie;
}