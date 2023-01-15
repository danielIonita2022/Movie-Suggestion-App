#pragma once
#include "Storages.h"
#include "Movie.h"
#include "User.h"
#include "Seen.h"
#include <vector>
#include <unordered_set>
#include <random>
#include <time.h>
#include <algorithm>
#include <typeinfo>

class Recommended
{
public:
	enum class genres
	{
		drama = 0,
		action = 1,
		SF = 2,
		comedy = 3,
		thriller = 4,
		fantasy = 5,
		animation = 6,
		horror = 7,
		romance = 8,
		mistery = 9,
		adventure = 10
	};

	inline Recommended(const User& currentUser) :
		m_currentUser{ currentUser }
	{
	}

	uint16_t maxim(std::array<uint16_t, 11> arr, uint16_t& mx);
	uint16_t position(std::array<uint16_t, 11> arr, uint16_t mx, uint16_t& poz);
	bool validation(std::string recomandare, std::array<std::string, 5> titluri);
	std::vector<Movie> getAllMovies(std::vector<Movie> movies, std::string gen);
	template <class T>
	std::vector<Movie>recommendMovies(T Storage);


	~Recommended() = default;
private:
	User m_currentUser;
};

inline uint16_t Recommended::maxim(std::array<uint16_t, 11> arr, uint16_t& mx)
{
	mx = 0;
	for (int i = 0; i < 11; i++)
	{
		mx = std::max(arr[i], mx);
	}
	return mx;
}

inline uint16_t Recommended::position(std::array<uint16_t, 11> arr, uint16_t mx, uint16_t& poz)
{
	mx = maxim(arr, mx);
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == mx)
		{
			poz = i;
			return poz;
		}
	}
	return -1;
}

inline bool Recommended::validation(std::string recomandare, std::array<std::string, 5> titluri)
{
	for (int i = 0; i < titluri.size(); i++)
	{
		if (recomandare == titluri[i]) return 0;
	}
	return 1;
}

inline std::vector<Movie> Recommended::getAllMovies(std::vector<Movie> movies, std::string gen)
{
	std::vector<Movie> allMovies;
	for (int i = 0; i < movies.size(); i++)
	{
		if (movies[i].m_listedIn.find(gen) != std::string::npos)
		{
			allMovies.emplace_back(movies[i]);
		}
	}
	return allMovies;
}

inline auto getAll(const Seen& seen)
{
	return Storages::getStorage().get_all<Seen>();
}
inline auto getAll(const Wishlist& wish)
{
	return Storages::getStorage().get_all<Wishlist>();
}
inline bool ifLiked(const Wishlist& wishMovie)
{
	return true;
}
inline bool ifLiked(const Seen& seenMovie)
{
	if (seenMovie.m_like)
		return true;
	return false;
}

template <class T>
inline std::vector<Movie> Recommended::recommendMovies(T SeenOrWish)
{
	using namespace sqlite_orm;
	std::unordered_set<std::string> type;
	std::vector<Movie> allMovies;
	Storages::DB storage = Storages::getStorage();
	
	auto objects = getAll(SeenOrWish);
	std::array<uint16_t, 11> types = { 0 };
	std::vector<std::string> enum_str = { "Drama","Action" ,"SF ","Comedy","Thriller" ,
								"Fantasy","Animation","Horror","Romance","Mistery","Adventure" };
	
	for (const auto& movie : objects)
	{
		if (movie.m_userName == m_currentUser.GetUsername())
		{
			bool ok = 0;
			if (typeid(T) == typeid(Seen))
			{
				if (ifLiked(movie))
					ok = 1;
			}
			else if (typeid(T) == typeid(Wishlist))
			{
				ok = 1;
			}
			if (ok)
			{
				std::vector <Movie> movieList = storage.get_all<Movie>(where
				(like((&Movie::m_title), movie.m_movieTitle)));

				Movie movielist = movieList[0];
				for (int i = 0; i < 11; i++)
				{
					if (movielist.m_listedIn.find(enum_str[i]) != std::string::npos)
					{
						types[i]++;
						//break;
					}
				}
				type.insert(movielist.m_listedIn);
			}
		}
	}
	uint16_t mx = 0;
	uint16_t poz = Recommended::position(types, mx, poz);

	std::vector<Movie>allMoviesFromDataBase = storage.get_all<Movie>();
	allMovies = getAllMovies(allMoviesFromDataBase, enum_str[poz]);

	return allMovies;
}