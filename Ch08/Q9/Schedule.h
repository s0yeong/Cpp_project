#pragma once
#include <string>
using namespace std;

class Seat;

class Schedule
{
	string time;
	Seat* seat;
public:
	Schedule();
	~Schedule();
	bool book(int no, string name);
	bool cancel(int no, string name);
	void view();
	void setTime(string time);
};

