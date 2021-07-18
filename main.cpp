#include <iostream>
#include <string>
#include "Developer.h"
#include "Worker.h"
#include "Seller.h"
#include "Accountant.h"
#include "WorkerBase.h"

int Menu();

int main() {
	int choose = 0, experience = 0, premDev = 0, baseDev = 0, sum = 0;
	float lvlDev = 0, sellerPercent = 0;
	int tmp = 0, amoughtProduct = 0, priceProduct = 0;
	int baseAccountant = 0, premAccountant = 0;
	bool Dev_prem = 0, Acc_prem = 0;
	int id = 0;
	WorkerBase dataBase;
	std::string name, sub;
	int endless = 1;
	while (endless) {
		choose = Menu();
		/*std::cout << "\n1. Add new Developer to Base\n2. Add new Seller to Base\n3. Add new Accountant to Base\n";
		std::cout << "4. Get total salary\n";
		std::cout << "Select an action: ";
		std::cin >> choose;
		while (!choose || choose < 1 || choose > 4) {
			std::cout << "Incorrect input. Try again!: ";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cin >> choose;
		}*/
		if (choose == 1) {
			std::cout << "Input name: ";
			std::cin.ignore(1000, '\n');
			getline(std::cin, name);
			std::cout << "Input developer id: ";
			std::cin >> id;
			while  (id < 0 || !id) {
				std::cout << "Incorrect input. Try again!: ";
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cin >> id;
			}
			std::cout << "Input experience of Developer: ";
			std::cin >> experience;
			std::cout << "Input level of Developer: ";
			std::cin >> lvlDev;
			std::cout << "Input base of Developer: ";
			std::cin >> baseDev;
			std::cout << "Did the Developer receive an premium?\n1. Yes\n2. No\n" << "Select option: ";
			std::cin >> tmp;
			while (tmp < 1 || tmp > 2) {
				std::cout << "Incorrect input. Try again!";
				std::cin >> tmp;
			}
			if (tmp == 1) Dev_prem = true;
			else Dev_prem = false;
			if (Dev_prem) {
				std::cout << "Input premium of Developer: ";
				std::cin >> premDev;
			}
			Developer* d1 = new Developer(name, id, experience, baseDev, lvlDev, Dev_prem, premDev);
			dataBase.add(d1);
		}
		else if (choose == 2) {
			std::cout << "Input name: ";
			std::cin.ignore(1000, '\n');
			getline(std::cin, name);
			std::cout << "Input Seller id: ";
			std::cin >> id;
			while (id < 0 || !id) {
				std::cout << "Incorrect input. Try again!: ";
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cin >> id;
			}
			std::cout << "How much products did the seller sell: ";
			std::cin >> amoughtProduct;
			std::cout << "How much does the product cost: ";
			std::cin >> priceProduct;
			std::cout << "Input the percent of sales: ";
			std::cin >> sellerPercent;
			std::cout << "Input subsidiary: ";
			std::cin.ignore(1000, '\n');
			getline(std::cin, sub);
			Seller* s1 = new Seller(name, id, priceProduct, amoughtProduct, sellerPercent, sub);
			dataBase.add(s1);
		}
		else if (choose == 3) {
			std::cout << "Input name: ";
			std::cin.ignore(1000, '\n');
			getline(std::cin, name);
			std::cout << "Input Accountant id: ";
			std::cin >> id;
			while (id < 0 || !id) {
				std::cout << "Incorrect input. Try again!: ";
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cin >> id;
			}
			std::cout << "Input base of Accountant: ";
			std::cin >> baseAccountant;
			std::cout << "Did the Accountant receive an premium?\n1. Yes\n2. No\n" << "Select option: ";
			std::cin >> tmp;
			while (tmp < 1 || tmp > 2) {
				std::cout << "Incorrect input. Try again!";
				std::cin >> tmp;
			}
			if (tmp == 1) Acc_prem = true;
			else Acc_prem = false;
			if (Acc_prem) {
				std::cout << "Input premium of Developer: ";
				std::cin >> premAccountant;
			}
			Accountant* ac1 = new Accountant(name, id, baseAccountant, premAccountant, Acc_prem);
			dataBase.add(ac1);
		}
		else if (choose == 4) {
			sum = dataBase.getTotalSalary();
			std::cout << "\nTotal Salary: " << sum << std::endl;
			break;
		}
	}
	return 0;
}