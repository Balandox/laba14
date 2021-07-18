#ifndef _WORKERBASE_H_
#define _WORKERBASE_H_
#include <iostream>
#include <vector>
#include "Worker.h"

class WorkerBase {
private:
	std::vector <Worker*> dataBase;
public:
	WorkerBase();
	void add(Worker* w);
	int virtual getTotalSalary();
};

#endif

