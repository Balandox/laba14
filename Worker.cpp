#include <iostream>
#include <string>
#include "Worker.h"

Worker::Worker(std::string n, size_t i) {
	this->name = n;
	this->id = i;
}