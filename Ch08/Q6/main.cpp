#include <iostream>
using namespace std;

#include "BaseArray.h"
#include "MyStack.h"

int main()
{
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);	//���ÿ� Ǫ��
	}
	cout << "���ÿ뷮: " << mStack.capacity() << ", ����ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; //���ÿ��� ��
	}

	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

	return 0;
}
