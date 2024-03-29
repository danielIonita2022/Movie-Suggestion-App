#pragma once
#include <iostream>
#include "User.h"
#include "Movie.h"
#include "LogIn.h"
#include "MoviePage.h"
#include "RecommendedPage.h"

class App
{
public:
	App();
	bool passwordValidation(std::string password);
	~App() = default;
};

