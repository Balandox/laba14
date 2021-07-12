#ifndef WORKER_H_
#define WORKER_H_
#include <string>
class Worker {
protected:
	std::string name;
	size_t id;
public:
	Worker(std::string name, size_t id);
	virtual int getSalary() const { 
		return 0; 
	}
};

#endif 

