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
	LogIn()=default;
	LogIn(const std::string& LogInUName, const std::string& LogInPassw);

	std::string GetLogInUN() const;
	void SetLogInUN(const std::string& userName);
	std::string GetLogInPassw() const;
	void SetLogInPassw(const std::string& password);
	void setCurrentUser();
	User getCurrentUser() const;
	User LogUser();
	~LogIn() = default;

private:

	std::string m_LogInUName;
	std::string m_LogInPassw;
	User m_currentUser;
};

