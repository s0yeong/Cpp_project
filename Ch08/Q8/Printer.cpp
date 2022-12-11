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
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}

	printedCount += pages;
	availableCount -= pages;
	return true;
}

void Printer::show() {
	cout << model +" ," << manufacturer << " ,���� ���� " << availableCount << "�� ,";
}


