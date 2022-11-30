#pragma once
#include "Storages.h"

Storages* Storages::m_storagesInstance = Storages::getInstance();

Storages::Storages()
{
}
StorageMovies Storages::getMovieStorage() const
{
	return storageMovies;
}
StorageUsers Storages::getUserStorage() const
{
	return storageUsers;
}
Storages* Storages::getInstance()
{
	if (m_storagesInstance == nullptr)
	{
		m_storagesInstance = new Storages;
	}
	return m_storagesInstance;
}
