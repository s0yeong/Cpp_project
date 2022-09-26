#include "EvenRandom.h"
#include <stdlib.h>
#include <time.h>

EvenRandom::EvenRandom() {
	srand((unsigned int)time(0));
}

int EvenRandom::next() {
	int n = rand();
	if (n % 2 == 0) return n;
	else next();
}

int EvenRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 0) return n;
	else nextInRange(a, b);
}
