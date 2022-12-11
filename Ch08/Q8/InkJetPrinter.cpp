#include <iostream>
using namespace std;

#include "InkJetPrinter.h"
#include "Printer.h"

InkJetPrinter::InkJetPrinter(string model, string manufacturer, int totalPapers, int totalInk)
	: Printer(model, manufacturer, totalPapers)
{
	this->availableInk = totalInk;
}

bool InkJetPrinter::printInkJet(int pages) {
	if (!print(pages)) {
		return false;
	}
	if (availableInk < pages) {
		cout << "잉크 잔량이 부족하여 프린트할 수 없습니다." << endl;
		return false;
	}
	availableInk -= pages;
	return true;
}

void InkJetPrinter::showState() {
	show();
	cout << "남은 잉크 " << availableInk << endl;
}
