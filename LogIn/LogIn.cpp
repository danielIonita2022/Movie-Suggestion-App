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

User LogIn::LogUser()
{
	StorageUsers storage = Storages::getInstance()->getUserStorage();
	User currentUser = storage.get<User>(m_LogInUName);
	return currentUser;
}
