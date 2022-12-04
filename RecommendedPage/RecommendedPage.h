#pragma once
#include "Storages.h"
#include "Movie.h"
#include "User.h"
#include <vector>
class RecommendedPage
{
public:
	RecommendedPage(const User& currentUser);
	std::vector <Movie> recommendFromWishlist() const;
	std::vector <Movie> recommendFromSeen() const;
	~RecommendedPage();
private:
	Storages* m_storageLocation;
	User m_currentUser;
};