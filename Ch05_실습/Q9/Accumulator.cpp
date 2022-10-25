#include "Accumulator.h"

Accumulator& Accumulator::add(int n) {
	value += n;
	return *this;
}