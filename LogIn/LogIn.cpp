#include "LogIn.h"

using namespace sqlite_orm;

LogIn::LogIn(const std::string& LogInUName, const std::string& LogInPassw):
m_LogInUName(LogInUName),
m_LogInPassw(LogInPassw)
{
}

std::string LogIn::GetLogInUN() const
{
	return m_LogInUName;
}

void LogIn::SetLogInUN(const std::string& userName)
{
	m_LogInUName = userName;
}

std::string LogIn::GetLogInPassw() const
{
	return m_LogInPassw;
}

void LogIn::SetLogInPassw(const std::string& password)
{
	m_LogInPassw = password;
}

User LogIn::LogUser()
{
	StorageUsers storage = Storages::getInstance().getUserStorage();
	if (storage.get_pointer<User>(m_LogInUName) != nullptr)
	{
		User currentUser = storage.get<User>(m_LogInUName);
		if(currentUser.GetPassword() == m_LogInPassw)
		return currentUser;
		else throw std::exception("Invalid password!");
	}
	throw std::exception("User not found!");
}

void LogIn::setCurrentUser()
{
	m_currentUser = this->LogUser();
}

User LogIn::getCurrentUser() const
{
	return m_currentUser;
}