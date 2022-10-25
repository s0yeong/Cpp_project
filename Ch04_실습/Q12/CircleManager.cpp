#include "CirlceManager.h"
#include <iostream>
using namespace std;

CircleManager::CircleManager(int size) {
	p = new Circle [size];
	this->size = size;

	int radius;
	string name;
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "������ ������ " << p[i].getArea() << endl;
			return;
		}
	}
	cout << name << "��(��) ã�� �� �����ϴ�." << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;

	int cnt = 0;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << area << "���� ū ���� �����ϴ�." << endl;
	}
}