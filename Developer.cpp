#include <iostream>
#include <string>
#include "Worker.h"
#include "Developer.h"

 int Developer::getSalary() const {
	int res = isBonus ? base + 1000 * this->level + this->premium : this->base + this->level * 1000;
	return res;
}