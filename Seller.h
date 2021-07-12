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
public:
	Seller(std::string name, int id, int price, int amought, float per) :Worker(name, id) {
		this->amought_product = amought;
		this->percent = per;
		this->productPrice = price;
	}
	virtual int getSalary() const;
};

#endif
