#include "Book.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	Book cpp("명품C++", 10000);
	Book java = cpp;	//복사 생성자 호출됨
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}