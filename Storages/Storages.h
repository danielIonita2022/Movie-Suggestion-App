#pragma once
#pragma warning(disable : 4996)
#include "CreateStorage.h"

using namespace sqlite_orm;

class Storages
{
public:
    
    using DB = decltype(CreateStorage());
    Storages() = default;
    static DB getStorage();
    static void PopulateMovies();
    static void UpdateUsers(const User& user);
    static void UpdateSeen(Seen& seen);
    static void UpdateWishlist(Wishlist& wishlist);
};
