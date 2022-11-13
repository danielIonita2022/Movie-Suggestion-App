#include "Movie.h"

void Movie::MakeDatabase()
{
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
}