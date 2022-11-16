#include "Movie.h"


auto Movie::CreateTable()
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
    return storage;
}

void Movie::MakeDatabase()
{
    auto storage = CreateTable();
    ParsedRow parsedRow;
    std::ifstream in("netflix_titles.csv");
    while (in.peek() != std::ifstream::traits_type::eof())
    {
        parsedRow.makeParsedRow(in);
        std::vector<std::string> elements = parsedRow.getParsedRow();
        Movie movie{
             elements[0],
             elements[1],
             elements[2],
             elements[3],
             elements[4],
             elements[5],
             elements[6],
             elements[7],
             elements[8],
             elements[9],
             elements[10],
             elements[11],
        };
        storage.replace(movie);
    }
}