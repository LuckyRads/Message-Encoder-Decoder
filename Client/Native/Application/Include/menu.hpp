#ifndef MENU_HPP
#define MENU_HPP

#include "types.hpp"
#include <string>

/// This class is responsible for handling user input choices
/// and showing the menu to the user
class Menu
{
private:
	static void ShowMenu(void (*displayMenu)(), const std::string menuText);

public:
	static IOType ChooseIO();
	static ActionType ChooseAction();
};

#endif