#include "SelectableRandom.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	SelectableRandom sr;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "10 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
