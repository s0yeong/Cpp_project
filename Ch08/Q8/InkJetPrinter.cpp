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
		cout << "��ũ �ܷ��� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}
	availableInk -= pages;
	return true;
}

void InkJetPrinter::showState() {
	show();
	cout << "���� ��ũ " << availableInk << endl;
}
