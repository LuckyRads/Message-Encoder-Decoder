#include "menu.hpp"
#include "types.hpp"
#include "enum.hpp"
#include <iostream>
#include <cstdio>

BaseAction GetBaseAction(const std::string &choice)
{
	if (choice == "q" || choice == "Q")
	{
		return BaseAction::QUIT;
	}
	else if (choice == "b" || choice == "B")
	{
		return BaseAction::BACK;
	}
	throw std::invalid_argument("Invalid choice provided.");
}

bool WasBaseActionRequested(const std::string &choice)
{
	if (choice == "q" || choice == "Q" || choice == "b" || choice == "B")
		return true;
	return false;
}

void ShowIOMenu()
{
	// printf("%u - %s\n", as_integer(IOType::FILE), IO_MAP.at(as_integer(IOType::FILE)).c_str());
	// printf("%u - %s\n", as_integer(IOType::CONSOLE), IO_MAP.at(as_integer(IOType::CONSOLE)).c_str());
	printf_s("IO MEnu\n");
}

void ShowActionMenu()
{
	// printf("%u - %s\n", as_integer(ActionType::ENCODE), ACTION_MAP.at(as_integer(ActionType::ENCODE)).c_str());
	// printf("%u - %s\n", as_integer(ActionType::DECODE), ACTION_MAP.at(as_integer(ActionType::DECODE)).c_str());
	printf_s("action menu\n");
}

void Menu::ShowMenu(void (*displayMenu)(), const std::string menuText)
{
	std::cout << "------------------" + menuText + "------------------\n";
	displayMenu();
	std::cout << "q - quit\n";
	std::cout << "----------------------------------------\n";
}

IOType Menu::ChooseIO()
{
	while (true)
	{
		Menu::ShowMenu(&ShowIOMenu, "IO selection");
		std::cout << "IO type: ";
		std::string choice;
		std::cin >> choice;

		if (WasBaseActionRequested(choice))
		{
			return (IOType)GetBaseAction(choice);
		}
		else if (choice == "1")
		{
			return IOType::FILE;
		}
		else if (choice == "2")
		{
			return IOType::CONSOLE;
		}
		else
		{
			std::cout << "Wrong option selected!\n";
		}
	}
	throw std::invalid_argument("Invalid IO argument");
}

ActionType Menu::ChooseAction()
{
	while (true)
	{
		Menu::ShowMenu(&ShowActionMenu, "Action selection");
		std::cout << "Your action: ";
		std::string action;
		std::cin >> action;

		if (WasBaseActionRequested(action))
		{
			return (ActionType)GetBaseAction(action);
		}
		else if (action == "1")
		{
			return ActionType::ENCODE;
		}
		else if (action == "2")
		{
			return ActionType::DECODE;
		}
		else
		{
			std::cout << "Wrong option selected!\n";
		}
	}
	throw std::invalid_argument("Invalid action argument!");
}
