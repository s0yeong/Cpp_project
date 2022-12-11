#include "ColorPoint.h"
#include "Point.h"

#include <iostream>
using namespace std;

ColorPoint::ColorPoint(int x, int y, string c) 
			: Point(x, y) {
	this->color = color;
}

void ColorPoint::show() {
	cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
}