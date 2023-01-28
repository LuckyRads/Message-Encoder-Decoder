// Message-Encoder-Decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "menu.hpp"
#include "coder.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string convertedText = "";

	while (true)
	{
		std::string action = Menu::ChooseAction();
		std::string inputText = Menu::EnterText(action);

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

		Menu::ShowConvertedText(action, convertedText);
	}

	return 0;
}
