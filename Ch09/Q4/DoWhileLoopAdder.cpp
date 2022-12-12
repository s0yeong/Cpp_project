#include "DoWhileLoopAdder.h"

int DoWhileLoopAdder::calculate()
{
	int sum = 0;
	int i = getX();
	do {
		sum += i;
		i++;
	} while (i <= getY());

	return sum;
}
