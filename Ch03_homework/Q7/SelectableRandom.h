#ifndef SELECTABLERANDOM_H
#define SELECTABLERANDOM_H

class SelectableRandom {
public:
	int next();
	int nextInRange(int a, int b);
	SelectableRandom();
};

#endif