#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include "Movie.h"
#include "User.h"
#include "Wishlist.h"
#include "Seen.h"
using namespace sqlite_orm;
auto inline CreateStorage()
{
    auto database = make_storage(
        { "filme.db" },
        make_table("Movies",
            make_column("showId", &Movie::m_showId, primary_key()),
            make_column("type", &Movie::m_type),
            make_column("title", &Movie::m_title),
            make_column("director", &Movie::m_director),
            make_column("cast", &Movie::m_cast),
            make_column("country", &Movie::m_country),
            make_column("dateAdded", &Movie::m_dateAdded),
            make_column("releaseYear", &Movie::m_releaseYear),
            make_column("rating", &Movie::m_rating),
            make_column("duration", &Movie::m_duration),
            make_column("listedIn", &Movie::m_listedIn),
            make_column("description", &Movie::m_description)
        ),
        make_table("Users",
            make_column("userName", &User::m_userName, primary_key()),
            make_column("firstName", &User::m_firstName),
            make_column("lastName", &User::m_lastName),
            make_column("password", &User::m_password),
            make_column("favMovie", &User::m_favMovie),
            make_column("favActor", &User::m_favActor),
            make_column("drama", &User::m_drama),
            make_column("action", &User::m_action),
            make_column("SF", &User::m_SF),
            make_column("comedy", &User::m_comedy),
            make_column("thriller", &User::m_thriller),
            make_column("fantasy", &User::m_fantasy),
            make_column("animation", &User::m_animation),
            make_column("horror", &User::m_horror),
            make_column("romance", &User::m_romance),
            make_column("mistery", &User::m_mistery),
            make_column("adventure", &User::m_adventure),
            make_column("year1", &User::m_year1),
            make_column("year2", &User::m_year2),
            make_column("movieSeries", &User::m_movieSeries)
        ),
        make_table("Wishlist",
            make_column("idWishlist", &Wishlist::m_idWishlist, autoincrement(), primary_key()),
            make_column("userName", &Wishlist::m_userName),
            make_column("movieTitle", &Wishlist::m_movieTitle)
        ),
        make_table("Seen",
            make_column("idSeen", &Seen::m_idSeen, autoincrement(), primary_key()),
            make_column("userName", &Seen::m_userName),
            make_column("movieTitle", &Seen::m_movieTitle),
            make_column("like", &Seen::m_like)
        )
    );
    database.sync_schema();
    return database;
}
