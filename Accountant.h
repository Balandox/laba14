#ifndef ACCOUNTANT_H_
#define ACCOUNTANT_H_
#include <iostream>
#include <string>
#include "Worker.h"
class Accountant : public Worker {
private:
	int premium;
	int base;
	bool isPrem;
public:
	Accountant(std::string name, int id, int b, int prem, bool isPr);
	int virtual getSalary();
};

#endif 