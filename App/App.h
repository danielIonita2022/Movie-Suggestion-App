#pragma once
#include <iostream>
#include "User.h"
#include "Movie.h"
#include "LogIn.h"
class App
{
public:
	App();
	void setCurrentUser(LogIn& logger);
	User getCurrentUser() const;
	~App() = default;
private:
	User m_currentUser;
};

