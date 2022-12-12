#pragma once

#include "Converter.h"

class KmToMile : public Converter
{
	double km;
public:
	KmToMile(double km) : Converter(km) { this->km = km; }
	double convert(double src);
	string getSourceString();
	string getDestString();
};

