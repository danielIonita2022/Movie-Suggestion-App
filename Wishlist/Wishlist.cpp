#include "Wishlist.h"

Wishlist::Wishlist() :
	m_idWishlist(-1), m_userName(""), m_movieTitle("")
{
}

Wishlist::Wishlist(const std::string& userName, const std::string& movieTitle) 
	: m_userName(userName), m_movieTitle(movieTitle)
{
}

Wishlist::Wishlist(const int& idWishlist, const std::string& userName, const std::string& movieTitle) :
	m_idWishlist(idWishlist), m_userName(userName), m_movieTitle(movieTitle)
{
}



