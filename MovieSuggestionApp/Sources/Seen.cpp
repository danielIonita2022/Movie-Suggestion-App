#include "Seen.h"

Seen::Seen() :
	m_idSeen(-1), m_userName(""), m_movieTitle(""), m_like(0)
{
}

Seen::Seen(const std::string& userName, const std::string& movieTitle, const bool& like) :
	m_userName(userName), m_movieTitle(movieTitle), m_like(like)
{
}

Seen::Seen(const int& idSeen, const std::string& userName, const std::string& movieTitle, const bool& like) :
	m_idSeen(idSeen), m_userName(userName), m_movieTitle(movieTitle), m_like(like)
{
}

