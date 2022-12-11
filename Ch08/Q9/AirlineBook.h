#pragma once
#include <string>
using namespace std;

class Schedule;

class AirlineBook
{
	string name;
	int nSchedules;		//스케줄 개수
	Schedule* sche;		//스케줄 배열	

	void book();
	void cancel();
	void view();
	void view(int s);
public:
	AirlineBook(string name, int nSchedules, string scheduleTime[]);
	~AirlineBook();
	void run();
};

