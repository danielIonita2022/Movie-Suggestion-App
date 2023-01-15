#pragma once
#pragma warning(disable : 4996)
#include "CreateStorage.h"
#include "ParsedRowDLL.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace sqlite_orm;

class Storages
{
public:

    using DB = decltype(CreateStorage());
    Storages() = default;
    static DB getStorage();
    static void PopulateMovies();
    static void InsertUser(const User& user);
    static void InsertSeen(Seen& seen);
	static void UpdateSeen(Seen& seen);
    static void InsertWishlist(Wishlist& wishlist);
	static void DeleteWishlist(const std::string& userName, const std::string& movieTitle);
};
