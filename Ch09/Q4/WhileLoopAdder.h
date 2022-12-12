#pragma once

#include "LoopAdder.h"

class WhileLoopAdder : public LoopAdder
{
protected:
	int calculate();
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
};

