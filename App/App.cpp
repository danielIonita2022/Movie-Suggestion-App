#include "App.h"
#include <iostream>
#include <cstdint>
#include <string>

std::vector<Movie> movieSearch(MoviePage films, std::string& title, bool& ok)
{
	std::cout << "What is the movie you'd like to search for? ";
	//because i had a cin>> before and it remained on that line. Added ws to move the line below (the problem is when i read 
	//with std::cin and after with std::getline)
	std::getline(std::cin >> std::ws, title);
	std::vector<Movie> SearchedFilm;
	SearchedFilm = films.getMovies(title, ok);
	return SearchedFilm;
}

App::App()
{
	std::cout << "WELCOME TO OUR MOVIE RECOMANDATION PAGE!" << '\n';
	std::cout << '\n';
	std::cout << "Please press key [ 0 ] if you want to REGISTER else please press key [ 1 ] if you want to LOG IN your account:" << '\n';
	std::cout << '\n';

	uint16_t character;
	//if 0 then follows Register, if 1 then follows LogIn, in any other case throw ERROR
	std::cin >> character;
	std::cin.get();
	std::cout << '\n';
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
		std::cout << "You are now on your REGISTER page!" << '\n';
		std::cout << "Enter your first name:" << '\n';
		std::getline(std::cin, firstName);
		std::cout << "Enter your last name:" << '\n';
		std::getline(std::cin, lastName);
		std::cout << "Enter the username you want to use on this app:" << '\n';
		std::getline(std::cin, userName);
		std::cout << "Enter the password you want to use on this app:" << '\n';
		std::getline(std::cin, password);
		std::cout << '\n';
		std::cout << "To help us finding the best recomandations for you please answer the following questions:" << '\n';
		std::cout << "1. What is your favourite movie?" << '\n';
		std::getline(std::cin, favMovie);
		std::cout << "2. Who is your favourite actor/actress?" << '\n';
		std::getline(std::cin, favActor);

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

		bool releaseY;
		std::cout << "4. Does the release year matter to you? " << '\n';
		std::cout << "Please select [ 0 ] if it doesn't and [ 1 ] if it does." << '\n';
		std::cin >> releaseY;
		if (releaseY == 1)
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

		std::cout << "5. Which one do you prefer more? Movies or TV-Shows? " << '\n';
		std::cout << "Please press [ 0 ] if you prefer MOVIES, press [ 1 ] if you prefer TV-SHOWS or press [ 2 ] if you prefer BOTH. " << '\n';
		std::cin >> movieSeries;

		std::cout << '\n';
		std::cout << "We are done! Thank you! " << '\n';
		std::cout << '\n';


		User newUser(firstName, lastName, userName, password, favMovie, favActor, drama, action, SF, comedy, thriller, fantasy, animation, horror,
			romance, mistery, adventure, year1, year2, movieSeries);
		newUser.UpdateDatabase();
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
		std::cout << "Enter your username:" << '\n';
		std::getline(std::cin, UserName);
		std::cout << "Enter your password:" << '\n';
		std::getline(std::cin, Password);
		LogIn logger(UserName, Password);
		logger.setCurrentUser();
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
		bool OK = 0;
		std::vector<Movie> SearchedFilm;
		while (option)
		{
			std::cout << "\nWelcome to the START PAGE! ";
			std::cout << "The menu is available\n";
			std::cout << "Please choose an option: \n";
			std::cout << "If you want to:\n" << '\n';
			std::cout << "Close the menu press [ 0 ]\n";
			std::cout << "Search a movie [ 1 ]\n";
			std::cout << "I want to see a movie's page [ 2 ]\n";
			std::cout << "Show my user page [ 3 ]\n";
			std::cout << "I want to see my wish-list [ 4 ]\n";
			std::cout << "Recommandations [ 5 ]\n";
			std::cout << '\n';
			std::cin >> option;
			switch (option)
			{
			case 1:
			{
				std::string movieName;
				MoviePage movies(&logger);
				SearchedFilm = movieSearch(movies, movieName, OK);
				std::cout << SearchedFilm[0].m_title << '\n';
				std::cout << SearchedFilm[0].m_director << '\n';
				break;
			}

			case  2:
			{
				if (OK == 1)
				{
					std::cout << "The page you asked for:";
					std::cout << SearchedFilm[0] << '\n';
				}
				std::cout << "The movie page does not exist! Please press [ 1 ] to search for another movie\n";
				break;
			}
			case 3:
			{
				logger.getCurrentUser().UserPage();
				break;
			}
			case 4:
			{
				logger.getCurrentUser().ShowWishlist(logger.GetLogInUN());
				break;
			}
			case 5:
			{
				if (OK == 1)
				{
					MoviePage movie(&logger);
					movie.ShowSimilar(SearchedFilm[0]);
				}
				else
					std::cout << "Recommandations do not exist! Please press [ 1 ] to search for another movie\n";
				break;
			}
			case 6:
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


