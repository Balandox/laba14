#ifndef DEVELOPER_H_
#define DEVELOPER_H_
#include "Worker.h"
#include <string>
class Developer : public Worker {
private:
	int experience;
	int premium;
	int base;
	float level;
	bool isBonus;
public:
	Developer(std::string name, size_t id, int Experience, int Base, float lvl, bool bonus, int premDev) : Worker(name, id) {
		this->base = Base;
		this->experience = Experience;
		this->isBonus = bonus;
		this->level = lvl;
		this->premium = premDev;
	}
	virtual int getSalary() const;
};
#endif 
