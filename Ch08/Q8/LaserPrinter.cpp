#include <iostream>
using namespace std;

#include "LaserPrinter.h"
#include "Printer.h"

LaserPrinter::LaserPrinter(string model, string manufacturer, int totalPapers, int totalToner)
	:Printer(model, manufacturer, totalPapers)
{
	this->availableToner = totalToner;
}

bool LaserPrinter::printLaser(int pages) {
	if (!print(pages))
		return false;
	if (availableToner < pages) {
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		return false;
	}
	availableToner --;
	cout << "프린트하였습니다. " << endl;
	return true;
}

void LaserPrinter::showState() {
	show();
	cout << "남은토너 " << availableToner << endl;
}


