#include "pch.h" // Ensure the precompiled header is included correctly  
#include <iostream> // Ensure proper syntax for including standard headers  
#include <cmath> // Include cmath for mathematical functions like power  

int main() {
	char op;
	double num1;
	double num2;
	double Result;

	std::cout << "Enter any Operator (+, -, *, /, ^): ";
	std::cin >> op;

	std::cout << "Enter any Number: ";
	std::cin >> num1;

	std::cout << "Enter any Number: ";
	std::cin >> num2;

	switch (op) {
	case '+':
			Result = num1 + num2;
			std::cout << "Result: " << Result << std::endl;
			break;
	case '-':
			Result = num1 - num2;
			std::cout << "Result: " << Result << std::endl;
			break;
	case '*':
			Result = num1 * num2;
			std::cout << "Result: " << Result << std::endl;
			break;
	case '/':
			Result = num1 / num2;
			std::cout << "Result: " << Result << std::endl;
			break;


	}
}