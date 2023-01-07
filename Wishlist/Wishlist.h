#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include <iostream>

struct Wishlist
{
    std::string m_userName;
    int m_idWishlist;
    std::string m_movieTitle;

    Wishlist();
    Wishlist(int idWishlist, std::string m_userName, std::string movieTitle);
};

