#include "User.h"


User::User(const std::string& firstName, const std::string& lastName,
	const std::string& userName, const std::string& password,
	const std::string& favMovie, const std::string& favActor,
	bool drama, bool action, bool SF, bool comedy, bool thriller, bool fantasy,
	bool animation, bool horror, bool romance, bool mistery, bool adventure,
	uint16_t year1, uint16_t year2, uint16_t movieSeries) :
	m_firstName(firstName),
	m_lastName(lastName),
	m_userName(userName),
	m_password(password),
	m_favMovie(favMovie),
	m_favActor(favActor),
	m_drama(drama),
	m_action(action),
	m_SF(SF),
	m_comedy(comedy),
	m_thriller(thriller),
	m_fantasy(fantasy),
	m_animation(animation),
	m_horror(horror),
	m_romance(romance),
	m_mistery(mistery),
	m_adventure(adventure),
	m_year1(year1),
	m_year2(year2),
	m_movieSeries(movieSeries)
{
}

std::string User::GetFirstName() const
{
	return m_firstName;
}

void User::SetFirstName(const std::string& firstName)
{
	m_firstName = firstName;
}

std::string User::GetLastName() const
{
	return m_lastName;
}

void User::SetLastName(const std::string& lastName)
{
	m_lastName = lastName;
}

std::string User::GetUsername() const
{
	return m_userName;
}

void User::SetUserName(const std::string& userName)
{
	m_userName = userName;
}

std::string User::GetPassword() const
{
	return m_password;
}

void User::SetPassword(const std::string& password)
{
	m_password = password;
}

std::string User::GetFavMovie() const
{
	return m_favMovie;
}

std::string User::GetFavActor() const
{
	return m_favActor;
}

bool User::GetDrama() const
{
	return m_drama;
}

bool User::GetAction() const
{
	return m_action;
}

bool User::GetSF() const
{
	return m_SF;
}

bool User::GetComedy() const
{
	return m_comedy;
}

bool User::GetThriller() const
{
	return m_thriller;
}

bool User::GetFantasy() const
{
	return m_fantasy;
}

bool User::GetAnimation() const
{
	return m_animation;
}

bool User::GetHorror() const
{
	return m_horror;
}

bool User::GetRomance() const
{
	return m_romance;
}

bool User::GetMistery() const
{
	return m_mistery;
}

bool User::GetAdventure() const
{
	return m_adventure;
}

void User::SetDrama(const bool& drama)
{
	m_drama = drama;
}

void User::SetAction(const bool& action)
{
	m_action = action;
}

void User::SetSF(const bool& sf)
{
	m_SF = sf;
}

void User::SetComedy(const bool& comedy)
{
	m_comedy = comedy;
}

void User::SetThriller(const bool& thriller)
{
	m_thriller = thriller;
}

void User::SetFantasy(const bool& fantasy)
{
	m_fantasy = fantasy;
}

void User::SetAnimation(const bool& animation)
{
	m_animation = animation;
}

void User::SetHorror(const bool& horror)
{
	m_horror = horror;
}

void User::SetRomance(const bool& romance)
{
	m_romance = romance;
}

void User::SetMistery(const bool& mistery)
{
	m_mistery = mistery;
}

void User::SetAdventure(const bool& adventure)
{
	m_adventure = adventure;
}

uint16_t User::GetYear1() const
{
	return m_year1;
}

uint16_t User::GetYear2() const
{
	return m_year2;
}

uint16_t User::GetMovieSeries() const
{
	return m_movieSeries;
}

void User::SetMovieSeries(const uint16_t& movieSeries)
{
	m_movieSeries = movieSeries;
}