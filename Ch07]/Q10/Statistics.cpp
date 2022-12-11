#include <iostream>
using namespace std;

#include "Statistics.h"

bool Statistics::operator!() {
	if (cnt == 0)
		return true;
	else
		return false;
}
Statistics& Statistics::operator<< (int n) {
	d[cnt] = n;
	cnt++;
	return *this;
}
void Statistics::operator~ () {
	for (int i = 0; i < cnt; i++) {
		cout << d[i] << ' ';
	}
	cout << endl;
}
void Statistics::operator>> (int& avg) {
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum += d[i];
	}
	avg = sum / cnt;
}
