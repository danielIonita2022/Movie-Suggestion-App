#pragma once
#include "User.h"
#include<string>

class LogIn
{
public:
	LogIn(std::string LogInUName, std::string LogInPassw);


	std::string GetLogInUN() const;
	std::string GetLogInPassw() const;

	~LogIn() = default;

	bool isValid(); 
	//check if the first name, last name, username and password are valid, else calls destructor

private:

	std::string m_LogInUName;
	std::string m_LogInPassw;
 
};

