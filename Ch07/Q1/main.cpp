#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500; //å a�� ���� 500�� ����
	b -= 500; //å b�� ���� 500�� ����
	a.show();
	b.show();
	
	return 0;
}