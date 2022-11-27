#pragma once
#include "User.h"
#include "Storages.h"
#include <string>
#include <sqlite_orm/sqlite_orm.h>

class LogIn
{
public:
	LogIn(std::string LogInUName, std::string LogInPassw);


	std::string GetLogInUN() const;
	std::string GetLogInPassw() const;

	~LogIn() = default;

	bool isValid(); 
	//check if the first name, last name, username and password are valid, else calls destructor

	User LogUser();

private:
	std::string m_LogInUName;
	std::string m_LogInPassw;
 
};

