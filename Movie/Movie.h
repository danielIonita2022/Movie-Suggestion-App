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

    static auto CreateTable() // because of using StorageMovies = decltype(Movie::CreateTable());
    {                         // from App.h this function was implemented in the header
        auto storage = sqlite_orm::make_storage(
            { "filme.db" },
            sqlite_orm::make_table("Movies",
                sqlite_orm::make_column("showId", &Movie::m_showId, sqlite_orm::primary_key()),
                sqlite_orm::make_column("type", &Movie::m_type),
                sqlite_orm::make_column("title", &Movie::m_title),
                sqlite_orm::make_column("director", &Movie::m_director),
                sqlite_orm::make_column("cast", &Movie::m_cast),
                sqlite_orm::make_column("country", &Movie::m_country),
                sqlite_orm::make_column("dateAdded", &Movie::m_dateAdded),
                sqlite_orm::make_column("releaseYear", &Movie::m_releaseYear),
                sqlite_orm::make_column("rating", &Movie::m_rating),
                sqlite_orm::make_column("duration", &Movie::m_duration),
                sqlite_orm::make_column("listedIn", &Movie::m_listedIn),
                sqlite_orm::make_column("description", &Movie::m_description)
            ));
        storage.sync_schema();
        return storage;
    }
    static void MakeDatabase();
    friend std::ostream& operator <<(std::ostream& out, const Movie& movie);
};


