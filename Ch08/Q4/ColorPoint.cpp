#include <iostream>
using namespace std;

#include "ColorPoint.h"
#include "Point.h"

void ColorPoint::show() {
	cout << color << "������ (" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
}