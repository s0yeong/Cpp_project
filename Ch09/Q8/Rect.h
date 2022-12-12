#pragma once

#include "Shape.h"

class Rect : public Shape
{
public:
	Rect(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width * height; }
};

