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
             elements[7],
             elements[8],
             elements[9],
             elements[10],
             elements[11],
        };
        storage.replace(movie);
    }
}