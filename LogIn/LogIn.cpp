#include "LogIn.h"

using namespace sqlite_orm;

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
	if (storage.get_pointer<User>(m_LogInUName) != nullptr)
	{
		User currentUser = storage.get<User>(m_LogInUName);
		if(currentUser.GetPassword() == m_LogInPassw)
		return currentUser;
		else throw std::exception("Invalid password!");
	}
	throw std::exception("User not found!");
}

