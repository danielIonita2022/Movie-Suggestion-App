#pragma once
#include "Movie.h"

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
             std::stoi(elements[7]),
             elements[8],
             elements[9],
             elements[10],
             elements[11],
        };
        storage.replace(movie);
    }
}

std::ostream& operator<<(std::ostream& out, const Movie& movie)
{
    out << movie.m_showId << '\n';
    out << movie.m_title << '\n';
    out << movie.m_director << '\n';
    out << movie.m_type << '\n';
    out << movie.m_cast << '\n';
    out << movie.m_country << '\n';
    out << movie.m_dateAdded << '\n';
    out << movie.m_releaseYear << '\n';
    out << movie.m_rating << '\n';
    out << movie.m_duration << '\n';
    out << movie.m_listedIn << '\n';
    out << movie.m_description << '\n';
    return out;
}