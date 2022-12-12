#include <iostream>
using namespace std;

#include "AbstractStack.h"
#include "IntStack.h"

int main()
{
	IntStack a(5);
	for (int i = 0; i < 10; i++) { //ó�� 5���� ���������� push�ǰ� ���� 5���� ���� full�� push ����
		if (a.push(i)) cout << "push ����" << endl;
		else cout << "���� full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) {	//ó�� 5���� ���������� pop�ǰ� ���� 5���� ���� empty�� pop ����
		if (a.pop(n)) cout << "pop ���� : " << n << endl;
		else cout << "���� empty" << endl;
	}
}