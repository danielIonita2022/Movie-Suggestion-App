#include "Wishlist.h"

Wishlist::Wishlist() :
	m_idWishlist(-1), m_userName(""), m_movieTitle("")
{
}

Wishlist::Wishlist(int idWishlist, std::string userName, std::string movieTitle) :
	m_idWishlist(idWishlist), m_userName(userName), m_movieTitle(movieTitle)
{
}



