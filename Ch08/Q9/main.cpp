#include <iostream>
using namespace std;

#include "AirlineBook.h"

int main()
{
	string scheduleTime[] = { "07��", "12��", "17��" };
	AirlineBook* p = new AirlineBook("�Ѽ��װ�", 3, scheduleTime);
	p->run();

	delete p;
}