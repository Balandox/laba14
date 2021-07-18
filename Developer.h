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
	Developer(std::string name, int id, int Experience, int Base, float lvl, bool bonus, int premDev);
	int virtual getSalary();
};
#endif 