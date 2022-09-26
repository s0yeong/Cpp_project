#include "SelectableRandom.h"
#include <stdlib.h>
#include <time.h>

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int n = rand();
	if (n % 2 == 0) return n;
	else next();
}

int SelectableRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 1) return n;
	else nextInRange(a, b);
}