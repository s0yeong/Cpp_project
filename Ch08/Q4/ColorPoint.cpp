#include <iostream>
using namespace std;

#include "ColorPoint.h"
#include "Point.h"

void ColorPoint::show() {
	cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
}