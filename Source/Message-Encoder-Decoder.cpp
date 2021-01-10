// Message-Encoder-Decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "Base64.h"
#include "Menu.h"

int main()
{
	std::string choice = Menu::choose();
	std::string text = Menu::enterText(choice);
	std::string convertedText = "";

	if (choice == "encode")
	{
		convertedText = Base64::encode(text);
	}
	else if (choice == "decode")
	{
		convertedText = Base64::decode(text);
	}
	else
	{
		std::cout << "Unknown action!\n";
	}

	std::cout << choice << "d text:\n" << convertedText << std::endl;

	std::cout << "Press q and enter to close the program...\n";
	std::cin >> text;
	return 0;
}
