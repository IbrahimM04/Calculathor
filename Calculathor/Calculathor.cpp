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
	while (true) {
		std::cout << "Kies een operator" << std::endl;
		std::cout << "1: x (keer)" << std::endl;
		std::cout << "2: + (plus)" << std::endl;
		std::cout << "3: - (min)" << std::endl;
		std::cout << "4: / (delen)" << std::endl;
		std::cin >> input;

		//vraag 2 cijfers
		//doe de berekening
		//geef de output weer op het scherm

		if (choice = std::stoi(input) > 0) {
			switch (choice)
			{
			case 1://x

				break;
			case 2://+
				break;
			case 3://-
				break;
			case 4:// /
				break;

			default:
				break;
			}
		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
