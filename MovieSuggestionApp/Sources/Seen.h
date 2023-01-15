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
    Seen(const std::string& userName, const std::string& movieTitle, const bool& like);
    Seen(const int& idSeen, const std::string& userName, const std::string& movieTitle, const bool& like);
};

