#include "Printer.h"
#include <string>
#include <iostream>
using namespace std;

Printer::Printer(string model, string manufacturer, int totalCount)
{
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = 0;
	this->availableCount = totalCount;
}

bool Printer::print(int pages) {
	if (availableCount < pages) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return false;
	}

	printedCount += pages;
	availableCount -= pages;
	return true;
}

void Printer::show() {
	cout << model +" ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,";
}


