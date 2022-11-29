#include "menu.h"
#include <iostream>
#include <cstdio>

void Menu::showMenu()
{
	std::cout << "------------------Menu------------------\n";
	std::cout << "1 - encode\n";
	std::cout << "2 - decode\n";
	std::cout << "q - quit\n";
	std::cout << "----------------------------------------\n";
}

void Menu::showConvertedText(std::string &action, std::string &text)
{
	std::printf("--------------%sd text--------------\n", action.c_str());
	std::cout << text << std::endl;
	std::cout << "----------------------------------------\n";
}

std::string Menu::chooseAction()
{
	while (true)
	{
		showMenu();
		std::cout << "Your action: ";

		std::string action;
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
			std::cout << "Exiting...\n";
			std::exit(0);
		}
		else
		{
			std::cout << "Wrong option selected!\n";
		}
	}
}

std::string Menu::enterText(std::string &action)
{
	std::string text;
	std::printf("Enter text which you'd like to %s:\n", action.c_str());
	std::getline(std::cin >> std::ws, text);
	return text;
}
