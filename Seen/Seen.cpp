#include "Seen.h"

Seen::Seen(std::string idSeen, std::string userName, std::string movieTitle):
	m_idSeen(idSeen),m_userName(userName),m_movieTitle(movieTitle)
{
	UpdateDatabase();
}

void Seen::UpdateDatabase()
{
	auto storage = CreateTable();
	storage.replace(*this);
}
