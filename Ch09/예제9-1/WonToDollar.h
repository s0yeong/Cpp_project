#pragma once

#include "Converter.h"

class WonToDollar : public Converter
{
	int won;
public:
	WonToDollar(int won) : Converter(won) { this->won = won; }
	double convert(double src);
	string getSourceString();
	string getDestString();
};

