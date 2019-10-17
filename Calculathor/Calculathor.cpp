// Calculathor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Calculator.h"
#include "ConsoleIO.h"

int main()
{
	ConsoleIO console;

	int answer = console.AskInt("Wat is je leeftijd, wollah?");
	std::cout << answer << std::endl;

	Calculator calc;
	Calculator* calcP = new Calculator();
	std::string input;
	int choice;

	while (true) {
		std::cout << "Kies een operator" << std::endl;
		std::cout << "1: x (keer)" << std::endl;
		std::cout << "2: + (plus)" << std::endl;
		std::cout << "3: - (min)" << std::endl;
		std::cout << "4: / (delen)" << std::endl;
		std::cout << "5: end (Ends the script)" << std::endl;
		std::cin >> input;
		

		//vraag 2 cijfers
		//doe de berekening
		//geef de output weer op het scherm


			choice = std::stoi(input);
			switch (choice)
			{
			case 1://x
				std::cout << "Input number 1" << std::endl;
				std::cin >> input;	
				std::stof(input);
				std::cout << "Input number 2" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Your answer: "<< std::endl << calcP->Multiply(std::stof(input), std::stof(input)) << std::endl;
				std::cout << std::endl;
				break;
			case 2://+
				std::cout << "Input number 1" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Input number 2" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Your answer: " << std::endl << calcP->Add(std::stof(input), std::stof(input)) << std::endl;
				std::cout << std::endl;
				break;
			case 3://-
				std::cout << "Input number 1" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Input number 2" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Your answer: " << std::endl << calcP->Subtract(std::stof(input), std::stof(input)) << std::endl;
				std::cout << std::endl;
				break;
			case 4:// /
				std::cout << "Input number 1" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Input number 2" << std::endl;
				std::cin >> input;
				std::stof(input);
				std::cout << "Your answer: " << std::endl << calcP->Divide(std::stof(input), std::stof(input)) << std::endl;
				std::cout << std::endl;
				break;
			case 5:
				return 0;

			default:
				break;
			}
		
	}

}