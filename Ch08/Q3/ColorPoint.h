#pragma once
#include <string>
using namespace std;

#include "Point.h"

class ColorPoint : virtual public Point
{
	string color;
public:
	ColorPoint(int x, int y, string c);
	void setPoint(int x, int y) { move(x, y); }
	void setColor(string c) { this->color = c; }
	void show();
};

