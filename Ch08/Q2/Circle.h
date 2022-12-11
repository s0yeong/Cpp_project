#pragma once

#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	string name;
public:
	void setRN(int R, string N) { setRadius(R); this->name = N; }
	string getName() { return name; }
};