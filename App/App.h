#pragma once
#include <iostream>
#include "User.h"
#include "LogIn.h"
#include "Movie.h"


using StorageMovies = decltype(Movie::CreateTable());
using StorageUsers = decltype(User::CreateTable());

class App
{
private:
	const StorageMovies storageMovies = Movie::CreateTable();
	const StorageUsers storageUsers = User::CreateTable();
public:

	App();
	StorageMovies getStorage();
	StorageUsers getStorageU();

	~App() = default;
};

