#include <iostream>
#include "Worker.h"
#include "Accountant.h"

Accountant::Accountant(std::string name, int id, int b, int prem, bool isPr) : Worker(name, id) {
	this->base = b;
	this->premium = prem;
	this->isPrem = isPr;
}

int Accountant::getSalary(){
	int res = isPrem ? this->base + this->premium : this->base;
	return res;
}