#include "Wishlist.h"

Wishlist::Wishlist(std::string userName, std::string idWishlist, std::string movieTitle):
	m_userName(userName),m_idWishlist(idWishlist),m_movieTitle(movieTitle)
{
	UpdateDatabase();
}

void Wishlist::UpdateDatabase()
{
	auto storage = CreateTable();
	storage.replace(*this);
}
