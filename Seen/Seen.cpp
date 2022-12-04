#include "Seen.h"

Seen::Seen():
	m_idSeen(-1),m_userName(""),m_movieTitle("")
{
}

Seen::Seen(int idSeen, std::string userName, std::string movieTitle):
	m_idSeen(idSeen),m_userName(userName),m_movieTitle(movieTitle)
{
	UpdateDatabase();
}

void Seen::UpdateDatabase()
{
	auto storage = CreateTable();
	auto insertedId = storage.insert(*this);
	m_idSeen = insertedId;
}
