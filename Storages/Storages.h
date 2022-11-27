#pragma once
#include "Movie.h"
#include "User.h"

using StorageMovies = decltype(Movie::CreateTable());
using StorageUsers = decltype(User::CreateTable());
class Storages
{
public:
	StorageMovies getMovieStorage() const;
	StorageUsers getUserStorage() const;
	static Storages* getInstance();
	Storages(const Storages& storageInstance) = delete;
	
private:
	Storages();
	static Storages* m_storagesInstance;
	const StorageMovies storageMovies = Movie::CreateTable();
	const StorageUsers storageUsers = User::CreateTable();
};

