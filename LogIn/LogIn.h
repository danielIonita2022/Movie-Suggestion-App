#pragma once
#include "User.h"
#include<string>
#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include "Storages.h"

class LogIn
{
public:
	LogIn(std::string LogInUName, std::string LogInPassw);

	std::string GetLogInUN() const;
	std::string GetLogInPassw() const;
	User LogUser();
	~LogIn() = default;

private:

	std::string m_LogInUName;
	std::string m_LogInPassw;
	
};

