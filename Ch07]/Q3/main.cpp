#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book book("�������", 0, 50); 
	if (!book) cout << "��¥��" << endl;

	return 0;
}