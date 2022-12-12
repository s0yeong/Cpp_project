#include "WhileLoopAdder.h"

int WhileLoopAdder::calculate()
{
	int sum = 0;
	int i = getX();
	while (i < getY() + 1) {
		sum += i;
		i++;
	}
	return sum;
}
