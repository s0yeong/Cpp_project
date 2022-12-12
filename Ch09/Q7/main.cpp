#include <iostream>
using namespace std;

#include "Oval.h"
#include "Rect.h"
#include "Shape.h"
#include "Triangular.h"

int main()
{
	Shape* p[3];
	p[0] = new Oval("��붱", 10, 20);
	p[1] = new Rect("����", 30, 40);
	p[2] = new Triangular("�佺Ʈ", 30, 40);
	for (int i = 0; i < 3; i++) {
		cout << p[i]->getName() << " ���̴� " << p[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++) delete p[i];
}