#pragma once
#include "Storages.h"

Storages* Storages::m_storagesInstance = Storages::getInstance();

Storages::Storages()
{
}
StorageMovies Storages::getMovieStorage() const
{
	return m_storageMovies;
}
StorageUsers Storages::getUserStorage() const
{
	return m_storageUsers;
}
StorageWishlists Storages::getWishlistStorage() const
{
	return m_storageWishlists;
}
StorageSeen Storages::getSeenStorage() const
{
	return m_storageSeen;
}
Storages* Storages::getInstance()
{
	if (m_storagesInstance == nullptr)
	{
		m_storagesInstance = new Storages;
	}
	return m_storagesInstance;
}
