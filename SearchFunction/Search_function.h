#pragma once
#pragma warning(disable : 4996)
#include "MoviePage.h"
 void WordSearching(App* movies, const std::string& word)
{
	auto table = movies->getStorage();
	auto whereCondition = sqlite_orm::where(sqlite_orm::like((&Movie::m_title),word));
	auto movie = table.get_all<Movie>(whereCondition);
	if (movie.empty())
		std::cout << "Not movie with such name as:" << word << std::endl;
	else

		for (auto& it : movie)
		{
			std::cout << table.dump(it) << std::endl;
		}
}
//(&Movie::m_title, &Movie::m_director, &Movie::m_cast, &Movie::m_country, &Movie::m_description)