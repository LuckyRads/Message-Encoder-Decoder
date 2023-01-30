#ifndef MENU_HPP
#define MENU_HPP

#include "types.hpp"
#include <string>

/// This class is responsible for handling user input choices
/// and showing the menu to the user
class Menu
{
private:
	static void ShowMenu();
	static void ShowMenu(void (*displayMenu)());

public:
	static void ShowConvertedText(std::string &action, std::string &text);
	static IOType ChooseIO();
	static std::string ChooseAction();
	static std::string EnterText(std::string &action);
};

#endif