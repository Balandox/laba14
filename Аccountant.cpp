#include <iostream>
#include "Worker.h"
#include "�ccountant.h"

int Accountant::getSalary() const {
	int res = isPrem ? this->base + this->premium : this->base;
	return res;
}