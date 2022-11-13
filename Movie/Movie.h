#pragma once
#pragma warning(disable : 4996)
#include "ParsedRow.h"
#include <sqlite_orm/sqlite_orm.h>
#include <iostream>
struct Movie
{
    std::string m_showId;
    std::string m_type;
    std::string m_title;
    std::string m_director;
    std::string m_cast;
    std::string m_country;
    std::string m_dateAdded;
    std::string m_releaseYear;
    std::string m_rating;
    std::string m_duration;
    std::string m_listedIn;
    std::string m_description;

    static void MakeDatabase();
};


