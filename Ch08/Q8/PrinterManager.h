#pragma once

#include "InkJetPrinter.h"
#include "LaserPrinter.h"

class PrinterManager
{
	InkJetPrinter* ip;
	LaserPrinter* lp;
public:
	PrinterManager();
	~PrinterManager();
	void operate();
};

