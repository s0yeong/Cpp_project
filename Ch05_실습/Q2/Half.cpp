#include <iostream>
using namespace std;

double half(double &n) {
	n = n / 2;
	return n;
}

int main()
{
	double n = 20;
	half(n);	//n�� �ݰ��� ���� n�� �ٲ۴�.
	cout << n;	//10�� ��µȴ�.
}