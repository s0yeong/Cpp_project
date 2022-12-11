#include <iostream>
using namespace std;

#include "Circle.h"

int main()
{
	string name;
	int radius, biggest;
	double size[5];			//각 circle의 면적
	NamedCircle pizza[5];
	
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRN(radius, name);
		size[i] = pizza[i].getArea();
	}

	biggest = 0;
	for (int i = 0; i < 4; i++) {
		if (size[i] < size[i + 1])
			biggest = i + 1;
	}

	cout << "가장 면적이 큰 피자는 " << pizza[biggest].getName() << "입니다.";


}