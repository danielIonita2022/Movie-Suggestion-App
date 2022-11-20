#pragma once
#include <string>


class User
{
	//e structura pe care am folosit o si la lab si compilatorul ia lucrurile de jos in sus
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


	~User() = default;

private:

	std::string m_firstName, m_lastName, m_userName, m_password, m_favMovie,m_favActor;
	bool m_drama, m_action, m_SF, m_comedy, m_thriller, m_fantasy, m_animation, m_horror, m_romance, m_mistery, m_adventure;
	uint16_t m_year1, m_year2, m_movieSeries;

};