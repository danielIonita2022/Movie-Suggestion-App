#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include <iostream>

struct Seen
{
	int m_idSeen;
	std::string m_userName;
	std::string m_movieTitle;

    Seen();
	Seen(int idSeen, std::string userName, std::string movieTitle);

    static auto CreateTable()
    {
        auto storage = sqlite_orm::make_storage(
            { "seen.db" },
            sqlite_orm::make_table("Seen",
                sqlite_orm::make_column("idSeen", &Seen::m_idSeen, sqlite_orm::autoincrement(), sqlite_orm::primary_key()),
                sqlite_orm::make_column("userName", &Seen::m_userName),
                sqlite_orm::make_column("movieTitle", &Seen::m_movieTitle)
            ));
        storage.sync_schema();
        return storage;
    }

    void UpdateDatabase();
};

