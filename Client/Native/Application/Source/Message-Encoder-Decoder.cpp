// Message-Encoder-Decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "menu.h"
#include "coder.h"

int main()
{
	std::string convertedText = "";

	while (true)
	{
		std::string action = Menu::chooseAction();
		std::string inputText = Menu::enterText(action);

		if (action == "encode")
		{
			convertedText = Coder::encode(inputText);
		}
		else if (action == "decode")
		{
			convertedText = Coder::decode(inputText);
		}
		else
		{
			std::cout << "Unknown action!\n";
		}

		Menu::showConvertedText(action, convertedText);
	}

	return 0;
}
