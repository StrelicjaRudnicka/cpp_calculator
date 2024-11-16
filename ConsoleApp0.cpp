// ConsoleApp0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num1, num2;
	double sum;
	std::string name;
	std::cout << "Type a number: ";
	std::cin >> num1;
	std::cout << "Type a second number: ";
	std::cin >> num2;
	std::cout << "what do you wish to do? example: if you wish to multiply, type multiply. possible actions: add, substract, divide and multiply.\n ";
	std::cin >> name;
	if (name == "add") {
		sum = num1 + num2;
	}
	else if (name == "substract") {
		sum = num1 - num2;
	}

	else if (name == "divide") {
		sum = num1 / num2;
	}
	else if (name == "multiply") {
		sum = num1 * num2;
	}

	std::cout << "Your total is: " << sum;

}


