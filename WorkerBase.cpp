#include <vector>
#include <iostream>
#include "WorkerBase.h"

WorkerBase::WorkerBase() {
}

void WorkerBase::add(Worker* w) {
	this->dataBase.push_back(w);
}

int WorkerBase::getTotalSalary(){
	int sum = 0;
	for (int i = 0; i < dataBase.size(); i++) {
		sum += this->dataBase[i]->getSalary();
	}
	return sum;
}