#include "EvenRandom.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	EvenRandom er;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
