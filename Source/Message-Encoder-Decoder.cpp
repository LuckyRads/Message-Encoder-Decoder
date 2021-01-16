// Message-Encoder-Decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "Base64.h"
#include "Menu.h"
#include "Coder.h"

int main()
{
	std::string convertedText = "";

	while (true)
	{
		std::string choice = Menu::choose();
		std::string text = Menu::enterText(choice);

		if (choice == "encode")
		{
			convertedText = Coder::encode(text);
		}
		else if (choice == "decode")
		{
			convertedText = Coder::decode(text);
		}
		else
		{
			std::cout << "Unknown action!\n";
		}

		std::cout << choice << "d text:\n" << convertedText << std::endl;
	}
	
	return 0;
}
