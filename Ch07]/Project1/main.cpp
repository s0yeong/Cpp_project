#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
	Stack stack;
	stack << 3 << 5 << 10; // 3, 5, 10�� ������� Ǫ��
	while (true) {
		if (!stack) break;	//���� empty
		int x;
		stack >> x;		//������ ž�� �ִ� ���� ��
		cout << x << ' ';
	}
	cout << endl;

}