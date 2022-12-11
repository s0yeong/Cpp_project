#pragma once
class Statistics
{
	int* d;
	int cnt;
public:
	Statistics() { d = new int[10]; cnt = 0; }
	bool operator!();
	Statistics& operator<< (int n);
	void operator~ ();
	void operator>> (int& avg);
};

