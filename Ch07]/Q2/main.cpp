#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("명품 C++", 30000, 00), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; //price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교

	return 0;
}