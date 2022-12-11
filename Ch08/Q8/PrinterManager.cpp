#include <iostream>
using namespace std;

#include "PrinterManager.h"

PrinterManager::PrinterManager()
{
	ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	lp = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
}

PrinterManager::~PrinterManager()
{
	delete ip;
	delete lp;
}

void PrinterManager::operate() 
{
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ip->showState();
	cout << "레이저 : ";
	lp->showState();
	cout << endl;

	int printer, pages;
	char ans;
	while (true) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> pages;
		switch (printer) {
		case 1: //잉크젯
			ip->printInkJet(pages);
			break;
		case 2: //레이저
			lp->printLaser(pages);
			break;
		default:
			cout << "잘못 입력하였습니다." << endl;
			continue;
		}
		ip->showState();
		lp->showState();
		cout << endl;

		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> ans;
		if (ans == 'y')
			continue;
		else
			break;
	}

}