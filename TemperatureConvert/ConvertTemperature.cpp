#include <iostream>
#include <cstdlib>
#include <Windows.h>


int main() {
	using namespace std;
	double temp;
	char unit;
	double sleep;
	std::string name;
	string auteur;
	auteur = "Evan Choquene";

	cout << "Quelle est votre nom: ";
	cin >> name;
	cout << "Bonjour " << name << '\n';
	cout << "Logiciel cree par " << auteur << '\n';
	cout << "Le logiciel arrive tous de suite\n";
	sleep = 1000;
	Sleep(sleep);
	
	cout << "***** Temperature conversion *****\n";

	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";
	cout << "What unit would you like to convert to: ";
	cin >> unit;

	if (unit == 'F' || unit == 'f') {
		cout << "Enter the temperature in celcius: ";
		cin >> temp;

		temp = (1.8 * temp) + 32.0;
		cout << "Temperature is: " << temp << " F\n";
	}

	else if (unit == 'C' || unit == 'c') {
		cout << "Enter the temperature in Fahrenheit: ";
		cin >> temp;

		temp = (temp - 32) / 1.8;
		cout << "Temperature is: " << temp << " C\n";	
	}
	else
	{
		cout << "Please enter in only C or F\n";
	}

	cout << "************************************\n";

	sleep = 10000;
	std::cout << "Le programme se fermera dans 10 secondes...\n";
	Sleep(sleep); // Pause pendant 20000 millisecondes (20 secondes)
	std::cout << "Fermeture du programme.\n";
	Sleep(1000);
	exit(0); // Fermeture du programme

	
}