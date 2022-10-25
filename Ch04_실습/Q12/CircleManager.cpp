#include "CirlceManager.h"
#include <iostream>
using namespace std;

CircleManager::CircleManager(int size) {
	p = new Circle [size];
	this->size = size;

	int radius;
	string name;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "도넛의 면적은 " << p[i].getArea() << endl;
			return;
		}
	}
	cout << name << "은(는) 찾을 수 없습니다." << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;

	int cnt = 0;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << area << "보다 큰 원은 없습니다." << endl;
	}
}