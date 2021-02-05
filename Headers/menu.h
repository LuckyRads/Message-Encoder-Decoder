#ifndef MENU_H
#define MENU_H

#include <string>

class Menu
{
public:
	static void showMenu();
	static std::string choose();
	static std::string enterText(std::string &action);
};

#endif