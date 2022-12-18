#include "User.h"
#include "Storages.h"
#include "Wishlist.h"
#include "Seen.h"

User::User(std::string firstName, std::string lastName, std::string userName, std::string password, std::string favMovie, std::string favActor,
	bool drama, bool action, bool SF, bool comedy, bool thriller, bool fantasy, bool animation, bool horror, bool romance, bool mistery, bool adventure,
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
	UpdateDatabase();
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

std::string User::GetUserName() const
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

void User::UpdateDatabase()
{
	auto storage = CreateTable();
	storage.replace(*this);
}

void User::UserPage()
{
	std::cout << "USER PAGE!\n";
	std::cout << "User name: " << m_userName << '\n';
	std::cout << "First name: " << m_firstName << '\n';
	std::cout << "Last name: " << m_lastName << '\n';
	//password button
	std::cout << "Favorite movie: " << m_favMovie << '\n';
	std::cout << "Favorite actor: " << m_favActor << '\n';
	std::cout << "Favorite movie genres: ";
	if (m_action)
	{
		std::cout << "action ";
	}
	if (m_adventure)
	{
		std::cout << "adventure ";
	}
	if (m_animation)
	{
		std::cout << "animation ";
	}
	if (m_comedy)
	{
		std::cout << "comedy ";
	}
	if (m_drama)
	{
		std::cout << "drama ";
	}
	if (m_fantasy)
	{
		std::cout << "fantasy ";
	}
	if (m_horror)
	{
		std::cout << "horror ";
	}
	if (m_mistery)
	{
		std::cout << "mistery ";
	}       
	if (m_romance)
	{
		std::cout << "romance ";
	}
	if (m_SF)
	{
		std::cout << "SF ";
	}
	if (m_thriller)
	{
		std::cout << "thriller ";
	}
	std::cout << '\n';
	if (m_year1 != 0 && m_year2 !=0)
	{
		std::cout << "Release date preference: " << m_year1 << " and " << m_year2 << '\n';
	}
	std::cout << "Likes: ";
	if (m_movieSeries == 0)
	{
		std::cout << "movies \n";
	}
	if (m_movieSeries == 1)
	{
		std::cout << "tv-shows \n";
	}
	if (m_movieSeries == 2)
	{
		std::cout << "movies and tv-shows\n";
	}
	std::cout << "Seen movies or TV-shows: \n";
	auto seenTable = Storages::getInstance().getSeenStorage();
	std::vector<Seen> seenUser;
	seenUser = seenTable.get_all<Seen>(sqlite_orm::where
	(sqlite_orm::like((&Seen::m_userName), m_userName)));
	if (seenUser.size() == 0)
	{
		std::cout << "empty list.\n";
	}
	else
	{
		for (const auto& movie : seenUser)
		{
			std::cout << movie.m_movieTitle;
			if (movie.m_like)
			{
				std::cout << " (LIKE) \n";
			}
			else
			{
				std::cout << " (DISLIKE) \n";
			}
		}
	}
}

void User::ShowWishlist(const std::string& name)
{
	using namespace sqlite_orm;
	auto table = Storages::getInstance().getWishlistStorage();
	std::vector<Wishlist> allMovies;
	allMovies = table.get_all<Wishlist>(where(like((&Wishlist::m_userName), name)));
	if (allMovies.size())
	{
		for (int i = 0; i < allMovies.size(); i++)
		{
			std::cout << allMovies[i] << '\n';
		}
	}
	else
	{
		std::cout << "The Wishlist is empty.\n";
	}
}