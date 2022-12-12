#include "ForLoopAdder.h"

int ForLoopAdder::calculate()
{
	int sum = 0;
	for (int i = getX(); i <= getY(); i++) {
		sum += i;
	}
	return sum;
}