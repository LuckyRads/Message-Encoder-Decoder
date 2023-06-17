// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "statemanager.hpp"
#include "menu.hpp"
#include "coder.hpp"
#include <iostream>
#include <string>

int main()
{
	try
	{
		StateManager stateManager;
		while (true)
		{
			stateManager.UpdateState();
		}
		return 0;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << "\n";
		return 1;
	}
}
