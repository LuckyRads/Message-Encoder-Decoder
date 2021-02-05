#ifndef MENU_H
#define MENU_H

#include <string>

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