#include <iostream>
using namespace std;

#include "Statistics.h"

int main()
{
	Statistics stat;
	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�." << endl;

	int x[5];
	cout << "5 ���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]�� ���� �Է�

	for (int i = 0; i < 5; i++) stat << x[i]; // x[i] ���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200; // 100, 200�� ��� ��ü�� �����Ѵ�.
	~stat;

	int avg;
	stat >> avg;	// ��� ��ü�κ��� ����� �޴´�.
	cout << "avg=" << avg << endl;	//����� ����Ѵ�.

	return 0;
}