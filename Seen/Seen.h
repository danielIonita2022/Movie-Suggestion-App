#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include <iostream>

struct Seen
{
    int m_idSeen;
    std::string m_userName;
    std::string m_movieTitle;
    bool m_like;

    Seen();
    Seen(int idSeen, std::string userName, std::string movieTitle, bool like);
};

