#pragma once
#include "Storages.h"

Storages::DB Storages::getStorage()
{
    static DB db = CreateStorage();
    return db;
}
void Storages::PopulateMovies()
{
    if (getStorage().count<Movie>() == 0)
    {
        ParsedRowDLL parsedRow;
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
            getStorage().replace<Movie>(movie);
        }
    }
}

void Storages::InsertUser(const User& user)
{
    getStorage().replace<User>(user);
}

void Storages::InsertSeen(Seen& seen)
{
    auto insertedId = getStorage().insert<Seen>(seen);
    seen.m_idSeen = insertedId;
}

void Storages::UpdateSeen(Seen& seen)
{
    getStorage().replace<Seen>(seen);
}

void Storages::InsertWishlist(Wishlist& wishlist)
{
    auto insertedId = getStorage().insert<Wishlist>(wishlist);
    wishlist.m_idWishlist = insertedId;
}

void Storages::DeleteWishlist(const std::string& userName, const std::string& movieTitle)
{
	getStorage().remove_all<Wishlist>(where(c(&Wishlist::m_userName) == userName 
        && c(&Wishlist::m_movieTitle) == movieTitle));
}
