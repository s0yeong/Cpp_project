#include "EvenRandom.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	EvenRandom er;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
