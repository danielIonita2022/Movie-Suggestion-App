#pragma once
#include "User.h"
#include<string>
#pragma once
#pragma warning(disable : 4996)
#include <sqlite_orm/sqlite_orm.h>
#include "Storages.h"

using StorageUsers = decltype(User::CreateTable());

class LogIn
{
public:
	LogIn(std::string LogInUName, std::string LogInPassw);


	std::string GetLogInUN() const;
	std::string GetLogInPassw() const;

	~LogIn() = default;


	std::vector<User>LogUser();

	bool isValid();

private:

	std::string m_LogInUName;
	std::string m_LogInPassw;
	

};

