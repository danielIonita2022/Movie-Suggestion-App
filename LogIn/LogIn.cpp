#include "LogIn.h"

LogIn::LogIn(std::string LogInUName, std::string LogInPassw):
m_LogInUName(LogInUName),
m_LogInPassw(LogInPassw)
{
}


std::string LogIn::GetLogInUN() const
{
	return m_LogInUName;
}

std::string LogIn::GetLogInPassw() const
{
	return m_LogInPassw;
}
