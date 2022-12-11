#include <iostream>
using namespace std;

#include "AirlineBook.h"

int main()
{
	string scheduleTime[] = { "07시", "12시", "17시" };
	AirlineBook* p = new AirlineBook("한성항공", 3, scheduleTime);
	p->run();

	delete p;
}