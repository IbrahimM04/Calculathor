#pragma once
#include <string>

class ConsoleIO {
public:
	ConsoleIO();
	~ConsoleIO();
	std::string Ask(std::string aQuestion);
	int AskInt(std::string aQuestion);

private:
};