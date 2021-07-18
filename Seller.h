#ifndef SELLER_H_
#define SELLER_H_
#include <iostream>
#include "Worker.h"
#include <string>
class Seller : public Worker {
private:
	int productPrice;
	int amought_product;
	float percent;
	std::string subsidiary;
public:
	Seller(std::string name, int id, int price, int amought, float per, std::string sub);
	int virtual getSalary();
};

#endif