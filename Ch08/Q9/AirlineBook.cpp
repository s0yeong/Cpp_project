#include <iostream>
#include <string>
using namespace std;

#include "AirlineBook.h"
#include "Schedule.h"
#include "Console.h"

AirlineBook::AirlineBook(string name, int nSchedules, string scheduleTime[])
{
	this->name = name;
	this->nSchedules = nSchedules;
	sche = new Schedule[nSchedules];	//3���� Schedule ��ü ����

	for (int i = 0; i < nSchedules; i++) {
		sche[i].setTime(scheduleTime[i]);
	}
}
AirlineBook::~AirlineBook()
{
	if (sche)
		delete[] sche;
}
void AirlineBook::run()
{
	cout << "***** " << name << "�� ���Ű��� ȯ���մϴ�" << " *****"<< endl;
	cout << endl;

	while (true) {
		int menu = Console::getMainMenu(4);
		switch (menu) {
		case 1:
			book();
			break;

		case 2:
			cancel();
			break;
		case 3:
			view();
		case 4:
			cout << "���� �ý����� �����մϴ�." << endl;
			return;
		case 5:
			cout << "�߸��Է��Ͽ����ϴ�" << endl;
		}
		cout << endl;
	}
}


void AirlineBook::book() {
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(nSchedules);	//����ڰ� ������ �������� �Է� �޴´�.
	view(s);	//������ s�� ���� ��Ȳ�� ����Ѵ�.
	seatNo = Console::getSeatNo();	//�¼� ��ȣ�� �Է¹޴´�.
	bookName = Console::getName();	//�������� �̸��� �Է¹޴´�.

	//�ش� ������ ����
	bool ret = sche[s - 1].book(seatNo, bookName);
	if (!ret)
		Console::print("�¼� ��ȣ�� �߸��Ǿ��ų� ����� �¼��Դϴ�.\n");
	else
		Console::print("����Ǿ����ϴ�.\n");
}
void AirlineBook::cancel() {
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(nSchedules);
	view(s);
	seatNo = Console::getSeatNo();
	bookName = Console::getName();

	//�ش� ������ ���
	bool ret = sche[s - 1].cancel(seatNo, bookName);
	if (!ret)
		Console::print("�¼� ��ȣ�� �������� �̸��� Ʋ���� ��Ұ� �����Ͽ����ϴ�.\n");
	else
		Console::print("������ ��ҵǾ����ϴ�.\n");
}
void AirlineBook::view() {
	//���� ��� �������� ���� ��Ȳ�� ����Ѵ�.
	for (int i = 0; i < 3; i++) {
		sche[i].view();
	}
}
// ������ s�� �¼� ���� ��Ȳ�� ����Ѵ�. s=1,2,3
void AirlineBook::view(int s) {
	sche[s - 1].view();		//�迭�� �ε����� 0���� ����
}