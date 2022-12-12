#pragma once

#include "Shape.h"

class Oval : public Shape
{
public:
	Oval(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return 3.14 * width * height; }
};

