#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("��ǰ C++", 30000, 00), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; //price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��

	return 0;
}