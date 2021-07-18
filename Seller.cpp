#include <iostream>
#include <string>
#include "Seller.h"
#include "Worker.h"

Seller::Seller(std::string name, int id, int price, int amought, float per, std::string sub) :Worker(name, id) {
	this->amought_product = amought;
	this->percent = per;
	this->productPrice = price;
	subsidiary = sub;
}

int Seller::getSalary(){
	int res = (this->percent / 100) * this->productPrice * this->amought_product;
	return res;
}