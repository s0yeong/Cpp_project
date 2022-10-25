#include "Dept.h"
#include <string>
#include <iostream>
using namespace std;

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	scores = new int[size];

	for (int i = 0; i < size; i++) {
		scores[i] = dept.scores[i];
	}
}

Dept::~Dept() {
	if (scores != NULL)
		delete[] scores;
}

void Dept::read() {
	cout << size << "개 정수 입력>> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] >= 60)	return true;
	else return false;
}

