#pragma once
#include <string>

class User
{
	//e structura pe care am folosit o si la lab si compilatorul ia lucrurile de jos in sus
public:

	User(std::string firstName, std::string lastName, std::string userName, std::string password);

	std::string GetFirstName() const;
	void SetFirstName(const std::string& firstName);
	std::string GetLastName() const;
	void SetLastName(const std::string& lastName);
	std::string GetUserName() const;
	void SetUserName(const std::string& userName);
	std::string GetPassword() const;
	void SetPassword(const std::string& password);

	~User() = default;

private:

	std::string m_firstName, m_lastName, m_userName, m_password;

};