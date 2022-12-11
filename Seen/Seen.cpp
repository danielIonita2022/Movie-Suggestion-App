#include "Seen.h"

Seen::Seen() :
	m_idSeen(-1), m_userName(""), m_movieTitle(""), m_like(0)
{
}

Seen::Seen(int idSeen, std::string userName, std::string movieTitle, bool like) :
	m_idSeen(idSeen), m_userName(userName), m_movieTitle(movieTitle), m_like(like)
{
	UpdateDatabase();
}

void Seen::UpdateDatabase()
{
	auto storage = CreateTable();
	auto insertedId = storage.insert(*this);
	m_idSeen = insertedId;
}
