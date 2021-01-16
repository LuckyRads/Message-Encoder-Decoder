#include "Menu.h"
#include <iostream>

std::string Menu::choose()
{
	while (true)
	{
		std::string action;

		std::cout << "------------------Menu------------------\n";
		std::cout << "Choose action which you want to perform:\n";
		std::cout << "1 - encode\n";
		std::cout << "2 - decode\n";
		std::cout << "q - quit\n";
		std::cout << "----------------------------------------\n";

		std::cin >> action;

		if (action == "1")
		{
			return "encode";
		}
		else if (action == "2")
		{
			return "decode";
		}
		else if (action == "q" || action == "Q")
		{
			std::exit(0);
		}
		else
		{
			std::cout << "Wrong option selected!\n";
		}
	}
}

std::string Menu::enterText(std::string action)
{
	std::string text;
	std::cout << "Enter text which you'd like to " << action << ":\n";
	std::cin >> text;
	return text;
}
