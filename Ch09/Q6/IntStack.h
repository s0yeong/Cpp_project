#pragma once

#include "AbstractStack.h"

class IntStack : public AbstractStack
{
	int tos;
	int* p;
	int capacity;
public:
	IntStack(int size);
	~IntStack();
	bool push(int n);
	bool pop(int& n);
	int size() { return tos; } //tos�� ���� ���ÿ� ���Ե� ������ ������ ����
};

