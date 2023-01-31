// Message-Encoder-Decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "statemanager.hpp"
#include "menu.hpp"
#include "coder.hpp"
#include <iostream>
#include <string>

int main()
{
	StateManager stateManager;
	while (true)
	{
		stateManager.UpdateState();
	}

	return 0;
}
