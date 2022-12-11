#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b); //키보드로부터 문자열로 책 이름을 입력 받음
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;

	return 0;
}