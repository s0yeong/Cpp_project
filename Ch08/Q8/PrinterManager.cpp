#include <iostream>
using namespace std;

#include "PrinterManager.h"

PrinterManager::PrinterManager()
{
	ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	lp = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
}

PrinterManager::~PrinterManager()
{
	delete ip;
	delete lp;
}

void PrinterManager::operate() 
{
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ip->showState();
	cout << "������ : ";
	lp->showState();
	cout << endl;

	int printer, pages;
	char ans;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		switch (printer) {
		case 1: //��ũ��
			ip->printInkJet(pages);
			break;
		case 2: //������
			lp->printLaser(pages);
			break;
		default:
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
			continue;
		}
		ip->showState();
		lp->showState();
		cout << endl;

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> ans;
		if (ans == 'y')
			continue;
		else
			break;
	}

}