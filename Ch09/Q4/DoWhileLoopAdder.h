#pragma once

#include "LoopAdder.h"

class DoWhileLoopAdder : public LoopAdder
{
protected:
	int calculate();
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
};

