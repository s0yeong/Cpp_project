#include "Book.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	Book cpp("��ǰC++", 10000);
	Book java = cpp;	//���� ������ ȣ���
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}