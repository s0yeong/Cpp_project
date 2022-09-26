#include "Date.h"
#include <string>
#include <iostream>

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(std::string s) {
	year = stoi(s.substr(0, 4));
	month = stoi(s.substr(5, 1));
	day = stoi(s.substr(7, 2));
}

void Date::show() {
	std::cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << std::endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}