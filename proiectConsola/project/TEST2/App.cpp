#include "App.h"
#include <iostream>
#include <cstdint>
#include <string>
#include <regex>

bool App::passwordValidation(std::string password)
{
	if (password.size() < 8)
	{
		std::cout << "The password is too short!\nPlease try again.\n";
		return false;
	}
	if (!std::regex_search(password, std::regex("[A-Z]+")))
	{
		std::cout << "The password doesn't contain any uppercase letters!\nPlease try again.\n";
		return false;
	}
	if (!std::regex_search(password, std::regex("[a-z]+")))
	{
		std::cout << "The password doesn't contain any lowercase letters!\nPlease try again.\n";
		return false;
	}
	if (!std::regex_search(password, std::regex("[0-9]+")))
	{
		std::cout << "The password doesn't contain any numbers!\nPlease try again.\n";
		return false;
	}
	std::cout << "The password is valid!\n";
	return true;
}

void message(uint16_t& character)
{
	std::cout << '\n';
	std::cout << "WELCOME TO OUR MOVIE RECOMANDATION PAGE!" << '\n';
	std::cout << '\n';
	std::cout << "Please press key [ 0 ] if you want to REGISTER else please press key [ 1 ] if you want to LOG IN your account:" << '\n';
	std::cout << '\n';
	//if 0 then follows Register, if 1 then follows LogIn, in any other case throw ERROR
	std::cin >> character;
	std::cin.get();
	std::cout << '\n';
}

void registerCharacteristics(std::string& firstName, std::string& lastName, std::string& userName, std::string& password)
{
	std::cout << "Enter your first name:" << '\n';
	std::getline(std::cin, firstName);
	std::cout << "Enter your last name:" << '\n';
	std::getline(std::cin, lastName);
	std::cout << "Enter the username you want to use on this app:" << '\n';
	std::getline(std::cin, userName);
	std::cout << "Enter the password you want to use on this app (The password should be at least 8 characters long, have at least one uppercase letter, one lowercase letter and one number):" << '\n';
	std::getline(std::cin, password);
}

void loggerCharacteristics(std::string& UserName, std::string& Password)
{
	std::cout << "Enter your username:" << '\n';
	std::getline(std::cin, UserName);
	std::cout << "Enter your password:" << '\n';
	std::getline(std::cin, Password);
}

void genres(bool& drama, bool& action, bool& SF, bool& comedy, bool& thriller, bool& fantasy, bool& animation,
	bool& horror, bool& romance, bool& mistery, bool& adventure)
{
	std::cout << "3. Which one of these do you prefer? " << '\n';
	std::cout << "Please select [ 0 ] if you don't like this genre and [ 1 ] if you do." << '\n';
	std::cout << "-drama" << '\n';
	std::cin >> drama;
	std::cout << "-action" << '\n';
	std::cin >> action;
	std::cout << "-SF" << '\n';
	std::cin >> SF;
	std::cout << "-comedy" << '\n';
	std::cin >> comedy;
	std::cout << "-thriller" << '\n';
	std::cin >> thriller;
	std::cout << "-fantasy" << '\n';
	std::cin >> fantasy;
	std::cout << "-animation" << '\n';
	std::cin >> animation;
	std::cout << "-horror" << '\n';
	std::cin >> horror;
	std::cout << "-romance" << '\n';
	std::cin >> romance;
	std::cout << "-mistery" << '\n';
	std::cin >> mistery;
	std::cout << "-adventure" << '\n';
	std::cin >> adventure;
}

void favMovieAndActor(std::string& favMovie, std::string& favActor)
{
	std::cout << "1. What is your favourite movie?" << '\n';
	std::getline(std::cin, favMovie);
	std::cout << "2. Who is your favourite actor/actress?" << '\n';
	std::getline(std::cin, favActor);
}

void YearOfReleasing(bool& releaseYear, uint16_t& year1, uint16_t& year2)
{
	std::cout << "4. Does the release year matter to you? " << '\n';
	std::cout << "Please select [ 0 ] if it doesn't and [ 1 ] if it does." << '\n';
	std::cin >> releaseYear;
	if (releaseYear == 1)
	{
		std::cout << "Please introduce years between 1960 and 2022." << '\n';
		std::cout << "I like movies from " << '\n';
		std::cin >> year1;
		std::cout << "to " << '\n';
		std::cin >> year2;
	}
	else
	{
		year1 = 0;
		year2 = 0;
	}
}

void MoviesOrSeries(uint16_t& movieSeries)
{
	std::cout << "5. Which one do you prefer more? Movies or TV-Shows? " << '\n';
	std::cout << "Please press [ 0 ] if you prefer MOVIES, press [ 1 ] if you prefer TV-SHOWS or press [ 2 ] if you prefer BOTH. " << '\n';
	std::cin >> movieSeries;
}

void quiz(std::string& favMovie, std::string& favActor, bool& drama, bool& action, bool& SF, bool& comedy, bool& thriller, bool& fantasy, bool& animation,
	bool& horror, bool& romance, bool& mistery, bool& adventure, bool& releaseYear, uint16_t& year1, uint16_t& year2, uint16_t& movieSeries)
{
	favMovieAndActor(favMovie, favActor);
	genres(drama, action, SF, comedy, thriller, fantasy, animation, horror, romance, mistery, adventure);
	YearOfReleasing(releaseYear, year1, year2);
	MoviesOrSeries(movieSeries);
}

void menu()
{
	std::cout << "\nWelcome to the START PAGE! ";
	std::cout << "The menu is available\n";
	std::cout << "Please choose an option: \n";
	std::cout << "If you want to:\n" << '\n';
	std::cout << "Close the menu press [ 0 ]\n";
	std::cout << "Search a movie [ 1 ]\n";
	std::cout << "Show my user page [ 2 ]\n";
	std::cout << "I want to see my wishlist [ 3 ]\n";
	std::cout << "Recommandations for your search movies [ 4 ]\n";
	std::cout << '\n';
}

App::App()
{
	uint16_t character;
	message(character);
	bool ok = 0;
	LogIn logger;
	switch (character)
	{
	case 0:
	{
		//register
		std::string firstName, lastName, userName, password, favMovie, favActor;
		bool drama, action, SF, comedy, thriller, fantasy, animation, horror, romance, mistery, adventure;
		uint16_t year1, year2, movieSeries;
		bool releaseY;
		std::cout << "You are now on your REGISTER page!" << '\n';
		registerCharacteristics(firstName, lastName, userName, password);
		while (!passwordValidation(password))
		{
			std::getline(std::cin, password);
		}
		std::cout << '\n';
		std::cout << "To help us finding the best recomandations for you please answer the following questions:" << '\n';

		quiz(favMovie, favActor, drama, action, SF, comedy, thriller, fantasy, animation, horror, romance, mistery, adventure,
			releaseY, year1, year2, movieSeries);

		std::cout << '\n';
		std::cout << "We are done! Thank you! " << '\n';
		std::cout << '\n';


		User newUser(firstName, lastName, userName, password, favMovie, favActor, drama, action, SF, comedy, thriller, fantasy, animation, horror,
			romance, mistery, adventure, year1, year2, movieSeries);
		Storages storage;
		storage.UpdateUsers(newUser);
		logger.SetLogInUN(userName);
		logger.SetLogInPassw(password);
		logger.setCurrentUser();
		ok = 1;
		break;
	}
	case 1:
	{
		std::cout << "You are now on your LOG IN page!" << '\n';
		std::string UserName, Password;
		loggerCharacteristics(UserName, Password);
		LogIn lg(UserName, Password);
		lg.setCurrentUser();
		logger = lg;
		ok = 1;
		break;
	}
	default:
	{
		throw std::exception("THE POSSIBILITY DOES NOT EXIST!");
		ok = 0;
		break;
	}
	}
	if (ok == 1)
	{
		int option = 10;
		std::vector<Movie> SearchedFilm;
		std::shared_ptr<LogIn> p_logger = std::make_shared<LogIn>(logger);
		MoviePage movies;
		std::string movieName;
		while (option)
		{
			menu();
			std::cin >> option;
			switch (option)
			{
			case 1:
			{
				std::string movieName;
				std::shared_ptr<LogIn> p_logger = std::make_shared<LogIn>(logger);
				MoviePage movies;
				movies.ShowDetails(p_logger.get()->getCurrentUser());
				break;
			}
			case 2:
			{
				//afisarea se face in gui
				std::cout << "User Profile!\n";
				break;
			}
			case 3:
			{
				//afisarea se face in gui
				std::cout << "Wishlist!\n";
				break;
			}
			case 4:
			{
				RecommendedPage page1(logger.getCurrentUser());
				page1.printRecommendation();
				break;
			}
			case 5:
			{
				std::cout << "Log out";
				delete& logger;
				break;
			}
			default:
			{
				std::cout << "Wrong option / number! Please retry!\n";
				break;
			}
			}
		}
	}
}