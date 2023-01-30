#include "menu.hpp"
#include "types.hpp"
#include "enum.hpp"
#include <iostream>
#include <cstdio>

void ShowIOMenu()
{
	// printf("%u - %s\n", as_integer(IOType::FILE), IO_MAP.at(as_integer(IOType::FILE)).c_str());
	// printf("%u - %s\n", as_integer(IOType::CONSOLE), IO_MAP.at(as_integer(IOType::CONSOLE)).c_str());
	printf_s("IOOO 1");
}

void Menu::ShowMenu(void (*displayMenu)(), const std::string menuText)
{
	std::cout << "------------------" + menuText + "------------------\n";
	displayMenu();
	std::cout << "q - quit\n";
	std::cout << "----------------------------------------\n";
}

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

IOType Menu::ChooseIO()
{
	IOType chosenIO = IOType::FILE;
	while (true)
	{
		Menu::ShowMenu(&ShowIOMenu, "IO selection");
		std::cout << "IO type:";
		std::string choice;
		std::cin >> choice;
		if (choice == "1")
		{
			return IOType::FILE;
		}
		else if (choice == "2")
		{
			return IOType::CONSOLE;
		}
	}
	throw std::invalid_argument("Invalid IO argument");
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
