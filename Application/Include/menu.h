#ifndef MENU_H
#define MENU_H

#include <string>

/// This class is responsible for handling user input choices
/// and showing the menu to the user
class Menu
{
private:
	static void showMenu();

public:
	static void showConvertedText(std::string &action, std::string &text);
	static std::string chooseAction();
	static std::string enterText(std::string &action);
};

#endif