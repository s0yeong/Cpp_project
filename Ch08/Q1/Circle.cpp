#include "Circle.h"

#include <iostream>
using namespace std;

NamedCircle::NamedCircle(int radius, string name) {
	setRadius(radius);
	this->name = name;
}

void NamedCircle::show() {
	cout << "�������� " << getRadius() << "�� " << this->name;
}
