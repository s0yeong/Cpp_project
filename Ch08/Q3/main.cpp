#include <iostream>
using namespace std;

#include "Point.h"
#include "ColorPoint.h"

int main()
{
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}