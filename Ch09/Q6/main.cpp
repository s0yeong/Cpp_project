#include <iostream>
using namespace std;

#include "AbstractStack.h"
#include "IntStack.h"

int main()
{
	IntStack a(5);
	for (int i = 0; i < 10; i++) { //처음 5개는 성공적으로 push되고 다음 5개는 스택 full로 push 실패
		if (a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) {	//처음 5개는 성공적으로 pop되고 다음 5개는 스택 empty로 pop 실패
		if (a.pop(n)) cout << "pop 성공 : " << n << endl;
		else cout << "스택 empty" << endl;
	}
}