#pragma once
#include <string>
using namespace std;

#include "Point.h"

class ColorPoint : public Point
{
	string color;
public:
	ColorPoint() : Point(0, 0) { color = "BLACK"; }
	ColorPoint(int x, int y, string c = " ") : Point(x, y) {this->color = c; }
	void setPoint(int x, int y) { move(x, y); }
	void setColor(string c) { this->color = c; }
	void show();
};

