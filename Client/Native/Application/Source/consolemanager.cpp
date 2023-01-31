#include "consolemanager.hpp"

#include <iostream>
#include <stdio.h>
#include <string>

ConsoleManager::ConsoleManager()
{
}

ConsoleManager::~ConsoleManager()
{
}

void ConsoleManager::Write(const std::string &actionType, const std::string &text)
{
    std::printf("--------------%sD text--------------\n", actionType.c_str());
    std::cout << text << std::endl;
    std::cout << "----------------------------------------\n";
}

std::string ConsoleManager::Read(const std::string &action)
{
    std::string text;
    std::printf("Enter text which you'd like to %s:\n", action.c_str());
    std::getline(std::cin >> std::ws, text);
    return text;
}
