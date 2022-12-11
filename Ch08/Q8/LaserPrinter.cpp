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
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}
	availableToner --;
	cout << "����Ʈ�Ͽ����ϴ�. " << endl;
	return true;
}

void LaserPrinter::showState() {
	show();
	cout << "������� " << availableToner << endl;
}


