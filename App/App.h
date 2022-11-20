#pragma once
#include <iostream>
#include "User.h"
#include "LogIn.h"
#include "Movie.h"
using StorageMovies = decltype(Movie::CreateTable());
class App
{
private:
	const StorageMovies storageMovies = Movie::CreateTable();
public:

	App();
	StorageMovies getStorage();
	~App() = default;
};

