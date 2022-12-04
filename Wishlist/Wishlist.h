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
    Wishlist(int idWishlist,std::string m_userName, std::string movieTitle);

    static auto CreateTable() 
    {
        auto storage = sqlite_orm::make_storage(
            { "wishlist.db" },
            sqlite_orm::make_table("Wishlist",
                sqlite_orm::make_column("idWishlist", &Wishlist::m_idWishlist,sqlite_orm::autoincrement(), sqlite_orm::primary_key()),
                sqlite_orm::make_column("userName",&Wishlist::m_userName),
                sqlite_orm::make_column("movieTitle",&Wishlist::m_movieTitle)
            ));
        storage.sync_schema();
        return storage;
    }

    void UpdateDatabase();
    friend std::ostream& operator <<(std::ostream& out, const Wishlist& movie);
};

