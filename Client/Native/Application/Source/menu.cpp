#include "menu.hpp"
#include "types.hpp"
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
	for (auto &it : IO_KEY_MAP)
	{
		printf("%c - %s\n", it.first, IO_DISPLAY_MAP.at(it.second).c_str());
	}
}

void ShowActionMenu()
{
	for (auto &it : ACTION_KEY_MAP)
	{
		printf("%c - %s\n", it.first, ACTION_DISPLAY_MAP.at(it.second).c_str());
	}
}

void Menu::ShowMenu(void (*displayMenu)(), const std::string menuText)
{
	std::cout << "------------------" + menuText + "------------------\n";
	displayMenu();
	for (auto &it : BASE_ACTION_KEY_MAP)
	{
		printf("%c - %s\n", it.first, BASE_ACTION_DISPLAY_MAP.at(it.second).c_str());
	}
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
