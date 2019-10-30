#include "ConsoleIO.h"
#include <iostream>
#include <string>

std::string input;

ConsoleIO::ConsoleIO() {
}

ConsoleIO::~ConsoleIO() {
}

std::string ConsoleIO::Ask(std::string aQuestion) {
	std::cout << aQuestion << std::endl;
	std::cin >> input;
	return input;
}

int ConsoleIO::AskInt(std::string aQuestion) {
	std::cout << aQuestion << std::endl;
	std::cin >> input;
	int answer = std::stoi(input);
	return answer;
}
