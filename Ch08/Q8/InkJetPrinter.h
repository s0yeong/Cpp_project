#pragma once
#include "Printer.h"

class InkJetPrinter : public Printer
{
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int totalPapers, int totalInk);
	bool printInkJet(int pages);
	void showState();
};

