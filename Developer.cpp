#include <iostream>
#include <string>
#include "Worker.h"
#include "Developer.h"

Developer ::Developer(std::string name, int id, int Experience, int Base, float lvl, bool bonus, int premDev) : Worker(name, id){
this->base = Base;
this->experience = Experience;
this->isBonus = bonus;
this->level = lvl;
this->premium = premDev;
}

int Developer:: getSalary(){
	int res = isBonus ? base + 1000 * this->level + this->premium : this->base + this->level * 1000;
	return res;
}