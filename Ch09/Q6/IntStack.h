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
	int size() { return tos; } //tos는 현재 스택에 삽입된 정수의 개수와 동일
};

