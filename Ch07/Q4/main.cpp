#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b); //Ű����κ��� ���ڿ��� å �̸��� �Է� ����
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;

	return 0;
}