#include <iostream>
using namespace std;

#include "Matrix.h"

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };	//2���� ����� 4���� ���� ��
	a >> x;		//a�� �� ���Ҹ� �迭 x�� ����. x[]�� {4,3,2,1}
	b << y;		//�迭 y�� ���� ���� b�� �� ���ҿ� ����

	for (int i = 0; i < 4; i++) cout << x[i] << ' '; //x[] ���
	cout << endl;
	b.show();
}