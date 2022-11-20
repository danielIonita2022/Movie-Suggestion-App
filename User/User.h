#pragma once
#include <string>
#include <sqlite_orm/sqlite_orm.h>
#pragma warning(disable : 4996)

class User
{
public:

	User(std::string firstName, std::string lastName, std::string userName, std::string password, std::string favMovie, std::string favActor,
		bool drama, bool action, bool SF, bool comedy, bool thriller, bool fantasy, bool animation, bool horror, bool romance, bool mistery, bool adventure,
		uint16_t year1, uint16_t year2, uint16_t movieSeries);

	std::string GetFirstName() const;
	void SetFirstName(const std::string& firstName);
	std::string GetLastName() const;
	void SetLastName(const std::string& lastName);
	std::string GetUserName() const;
	void SetUserName(const std::string& userName);
	std::string GetPassword() const;
	void SetPassword(const std::string& password);
	std::string GetFavMovie() const;
	std::string GetFavActor() const;
	bool GetDrama() const;
	bool GetAction() const;
	bool GetSF() const;
	bool GetComedy() const;
	bool GetThriller() const;
	bool GetFantasy() const;
	bool GetAnimation() const;
	bool GetHorror() const;
	bool GetRomance() const;
	bool GetMistery() const;
	bool GetAdventure() const;
	uint16_t GetYear1() const;
	uint16_t GetYear2() const;
	uint16_t GetMovieSeries() const;

	static auto CreateTable()
	{
		auto storage = sqlite_orm::make_storage(
			{ "users.db" },
			sqlite_orm::make_table("Users",
				sqlite_orm::make_column("userName", &User::m_userName, sqlite_orm::primary_key()),
				sqlite_orm::make_column("firstName", &User::m_firstName),
				sqlite_orm::make_column("lastName", &User::m_lastName),
				sqlite_orm::make_column("password", &User::m_password),
				sqlite_orm::make_column("favMovie", &User::m_favMovie),
				sqlite_orm::make_column("favActor", &User::m_favActor),
				sqlite_orm::make_column("drama", &User::m_drama),
				sqlite_orm::make_column("action", &User::m_action),
				sqlite_orm::make_column("SF", &User::m_SF),
				sqlite_orm::make_column("comedy", &User::m_comedy),
				sqlite_orm::make_column("thriller", &User::m_thriller),
				sqlite_orm::make_column("fantasy", &User::m_fantasy),
				sqlite_orm::make_column("animation", &User::m_animation),
				sqlite_orm::make_column("horror", &User::m_horror),
				sqlite_orm::make_column("romance", &User::m_romance),
				sqlite_orm::make_column("mistery", &User::m_mistery),
				sqlite_orm::make_column("adventure", &User::m_adventure),
				sqlite_orm::make_column("year1", &User::m_year1),
				sqlite_orm::make_column("year2", &User::m_year2),
				sqlite_orm::make_column("movieSeries", &User::m_movieSeries)
			));
		storage.sync_schema();
		return storage;
	}

	~User() = default;

private:

	std::string m_firstName, m_lastName, m_userName, m_password, m_favMovie,m_favActor;
	bool m_drama, m_action, m_SF, m_comedy, m_thriller, m_fantasy, m_animation, m_horror, m_romance, m_mistery, m_adventure;
	uint16_t m_year1, m_year2, m_movieSeries;

};