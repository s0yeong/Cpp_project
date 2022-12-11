#pragma once
#include "Printer.h"

class LaserPrinter : public Printer
{
	int availableToner;
public:
	bool printLaser(int pages);
	LaserPrinter(string model, string manufacturer, int printedCount, int availableToner);
	void showState();
};

