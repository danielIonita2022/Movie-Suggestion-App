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
    Wishlist(const std::string& userName, const std::string& movieTitle);
    Wishlist(const int& idWishlist, const std::string& userName, const std::string& movieTitle);
};

