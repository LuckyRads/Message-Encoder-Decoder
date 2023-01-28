#include "menu.hpp"
#include <iostream>
#include <cstdio>

void Menu::ShowMenu()
{
	std::cout << "------------------Menu------------------\n";
	std::cout << "1 - encode\n";
	std::cout << "2 - decode\n";
	std::cout << "q - quit\n";
	std::cout << "----------------------------------------\n";
}

void Menu::ShowConvertedText(std::string &action, std::string &text)
{
	std::printf("--------------%sd text--------------\n", action.c_str());
	std::cout << text << std::endl;
	std::cout << "----------------------------------------\n";
}

std::string Menu::ChooseAction()
{
	while (true)
	{
		ShowMenu();
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

std::string Menu::EnterText(std::string &action)
{
	std::string text;
	std::printf("Enter text which you'd like to %s:\n", action.c_str());
	std::getline(std::cin >> std::ws, text);
	return text;
}
