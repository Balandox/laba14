#ifndef WORKER_H_
#define WORKER_H_
#include <string>
class Worker {
protected:
	std::string name;
	int id;
public:
	Worker(std::string name, int id);
	int virtual getSalary() = 0;
};

#endif 
