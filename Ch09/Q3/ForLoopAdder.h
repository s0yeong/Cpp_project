#pragma once

#include "LoopAdder.h"

class ForLoopAdder : public LoopAdder
{
protected:
	int calculate();
public:
	ForLoopAdder(string name):LoopAdder(name) {}
};

