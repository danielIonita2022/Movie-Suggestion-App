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

std::vector<User> LogIn::LogUser()
{
	StorageUsers storage = Storages::getInstance()->getUserStorage();
	auto currentUser = storage.get_all<User>(
		where(is_equal(&User::GetUserName,m_LogInUName)and(is_equal(&User::GetPassword,m_LogInPassw)))
		);
	return currentUser;
}

bool LogIn::isValid()
{
	//std::vector<User> person = LogUser();
	if (LogUser().size() != 0)
		return 1;
	else return 0;
}

