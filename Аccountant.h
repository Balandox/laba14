#ifndef ACCOUNTANT_H_
#define ACCOUNTANT_H_
#include <iostream>
#include <string>
class Accountant : public Worker {
private:
	int premium;
	int base;
	bool isPrem;
public:
	Accountant(std::string name, int id, int b, int prem, bool isPr) : Worker(name, id) {
		this->base = b;
		this->premium = prem;
		this->isPrem = isPr;
	}
	virtual int getSalary() const;
};

#endif 
