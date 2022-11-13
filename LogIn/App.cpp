#include "App.h"
#include <iostream>
#include<cstdint>

App::App()
{

	std::cout << "WELCOME TO OUR MOVIE RECOMANDATION PAGE!" << '\n';
	std::cout << '\n';
	std::cout << "Please press key 0 if you want to REGISTER else please press key 1 if you want to LOG IN your account:" << '\n';
	std::cout << '\n';

	uint16_t character;
	//if 0 then follows Register, if 1 then follows LogIn, in any other case throw ERROR
	std::cin >> character;
	std::cout << '\n';
	switch (character)
	{
	case 0:
	{
		//register
		std::cout << "You are now on your REGISTER page!" << '\n';
		break;
	}
	case 1:
	{
		std::cout << "You are now on your LOG IN page!" << '\n';
		std::string UserName, Password;
		std::cout << "Enter your username:" << '\n';
		std::cin >> UserName;
		std::cout << "Enter your password:" << '\n';
		std::cin >> Password;
		LogIn Person1(UserName, Password);
		break;
	}
	default:
	{
		throw std::exception("THE POSSIBILITY DOES NOT EXIST!");
		break;
	}
	}
}