#include <iostream>
#include <cstdlib>
#include <Windows.h>

int main() {

	char op;
	double num1;
	double num2;
	double result;
	double close;
	close = 10000;

	std::cout << "********* CALCULATOR *********\n";

	std::cout << "Enter either (+ - * /): ";
	std::cin >> op;

	std::cout << "Enter #1 :";
	std::cin >> num1;

	std::cout << "Enter #2 : ";
	std::cin >> num2;

	switch (op) {
	    case '+':
			result = num1 + num2;
			std::cout << "Result = " << result << '\n';
			break;

		case '-':
			result = num1 - num2;
			std::cout << "Result = " << result << '\n';
			break;

		case '*':
			result = num1 * num2;
			std::cout << "Result = " << result << '\n';
			break;

		case '/':
			result = num1 / num2;
			std::cout << "Result = " << result << '\n';
			break;
		default:
			std::cout << "That wasn't a valid reponse" << '\n';
			break;
		

	}



	std::cout << "*******************************\n";

	std::cout << "Le programme se fermera dans 10 secondes...\n";
	Sleep(close); // Pause pendant 20000 millisecondes (20 secondes)
	std::cout << "Fermeture du programme.\n";
	Sleep(1000);
	exit(0); // Fermeture du programme

}