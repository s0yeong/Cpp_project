#include "Pizza.h"
#include <string>
using namespace std;

void Pizza::setRadius(int radius) {
	this->radius = radius;
}

void Pizza::setTopping(string topping) {
	this->topping = topping;
}

int Pizza::getRadius() {
	return radius;
}

string Pizza::getTopping() {
	return topping;
}