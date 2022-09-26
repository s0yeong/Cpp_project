#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
private:
	int year, month, day;

public:
	Date(int y, int m, int d);
	Date(std::string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

#endif
