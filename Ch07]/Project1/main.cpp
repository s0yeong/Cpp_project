#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
	Stack stack;
	stack << 3 << 5 << 10; // 3, 5, 10을 순서대로 푸시
	while (true) {
		if (!stack) break;	//스택 empty
		int x;
		stack >> x;		//스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << endl;

}