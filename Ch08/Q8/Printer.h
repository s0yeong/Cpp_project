#pragma once
#include <string>
using namespace std;

class Printer
{
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string model, string manufacturer, int totalCount);
protected:
	bool print(int pages);
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void show();
};

