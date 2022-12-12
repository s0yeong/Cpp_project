#pragma once

#include "Shape.h"

class Triangular : public Shape
{
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width * height / 2; }
};

