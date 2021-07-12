#include <iostream>
#include <string>
#include "Seller.h"
#include "Worker.h"

int Seller::getSalary() const {
	int res = (this->percent/100) * this->productPrice * this->amought_product;
	return res;
}