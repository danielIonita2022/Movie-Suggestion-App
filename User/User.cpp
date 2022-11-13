#include "User.h"

User::User(std::string firstName, std::string lastName, std::string userName,std::string password) :
	m_firstName(firstName),
	m_lastName(lastName), 
	m_userName(userName),
	m_password(password)
{
}

std::string User::GetFirstName() const
{
	return m_firstName;
}

void User::SetFirstName(const std::string& firstName)
{
	m_firstName = firstName;
}

std::string User::GetLastName() const
{
	return m_lastName;
}

void User::SetLastName(const std::string& lastName)
{
	m_lastName = lastName;
}

std::string User::GetUserName() const
{
	return m_userName;
}

void User::SetUserName(const std::string& userName)
{
	m_userName = userName;
}

std::string User::GetPassword() const
{
	return m_password;
}

void User::SetPassword(const std::string& password)
{
	m_password = password;
}