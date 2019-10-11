// Calculathor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Calculator.h"

int main()
{
	Calculator calc;
	Calculator* calcP = new Calculator();
	std::string input;
	int choice;
	float num1;
	float num2;

	while (true) {
		std::cout << "Kies een operator" << std::endl;
		std::cout << "1: x (keer)" << std::endl;
		std::cout << "2: + (plus)" << std::endl;
		std::cout << "3: - (min)" << std::endl;
		std::cout << "4: / (delen)" << std::endl;
		std::cout << "5: end (Ends the script)" << std::endl;
		std::cin >> input;
		choice = std::stoi(input);
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid" << std::endl;
		}

		//vraag 2 cijfers
		//doe de berekening
		//geef de output weer op het scherm

		if (choice = std::stoi(input) > 0) {
			choice = std::stoi(input);
			switch (choice)
			{
			case 1://x
				std::cout << "Input number 1" << std::endl;
				std::cin >> num1;
				std::cout << "Input number 2" << std::endl;
				std::cin >> num2;
				std::cout << "Your answer: "<< std::endl << calcP->Multiply(num1, num2) << std::endl;
				std::cout << std::endl;
				break;
			case 2://+
				std::cout << "Input number 1" << std::endl;
				std::cin >> num1;
				std::cout << "Input number 2" << std::endl;
				std::cin >> num2;
				std::cout << "Your answer: " << std::endl << calcP->Add(num1, num2) << std::endl;				
				std::cout << std::endl;
				break;
			case 3://-
				std::cout << "Input number 1" << std::endl;
				std::cin >> num1;
				std::cout << "Input number 2" << std::endl;
				std::cin >> num2;				
				std::cout << "Your answer: " << std::endl << calcP->Subtract(num1, num2) << std::endl;
				std::cout << std::endl;
				break;
			case 4:// /
				std::cout << "Input number 1" << std::endl;
				std::cin >> num1;
				std::cout << "Input number 2" << std::endl;
				std::cin >> num2;
				std::cout << "Your answer: " << std::endl << calcP->Divide(num1, num2) << std::endl;
				std::cout << std::endl;
				break;
			case 5:
				return 0;

			default:
				break;
			}
		}
	}

}