#pragma once
#include "Movie.h"
#include "User.h"
#include "Wishlist.h"
#include "Seen.h"

using StorageMovies = decltype(Movie::CreateTable());
using StorageUsers = decltype(User::CreateTable());
using StorageWishlists = decltype(Wishlist::CreateTable());
using StorageSeen = decltype(Seen::CreateTable());

class Storages
{
public:
	StorageMovies getMovieStorage() const;
	StorageUsers getUserStorage() const;
	StorageWishlists getWishlistStorage() const;
	StorageSeen getSeenStorage() const;
	static Storages& getInstance();
	Storages(const Storages& storageInstance) = delete;

private:
	Storages();
	const StorageMovies m_storageMovies = Movie::CreateTable();
	const StorageUsers m_storageUsers = User::CreateTable();
	const StorageWishlists m_storageWishlists = Wishlist::CreateTable();
	const StorageSeen m_storageSeen = Seen::CreateTable();
};
