#include <iostream>
using namespace std;

#include "Circle.h"

int main()
{
	string name;
	int radius, biggest;
	double size[5];			//�� circle�� ����
	NamedCircle pizza[5];
	
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
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

	cout << "���� ������ ū ���ڴ� " << pizza[biggest].getName() << "�Դϴ�.";


}