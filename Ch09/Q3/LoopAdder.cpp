#include <iostream>
using namespace std;

#include "LoopAdder.h"

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}
void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}