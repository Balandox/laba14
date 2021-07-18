#include <iostream>

int Menu() {
	int choose = 0;
	std::cout << "\n1. Add new Developer to Base\n2. Add new Seller to Base\n3. Add new Accountant to Base\n";
	std::cout << "4. Get total salary\n";
	std::cout << "Select an action: ";
	std::cin >> choose;
	while (!choose || choose < 1 || choose > 4) {
		std::cout << "Incorrect input. Try again!: ";
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cin >> choose;
	}
	return choose;
}