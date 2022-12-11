#pragma once
#include "BaseArray.h"

class MyStack : public BaseArray
{
	int top = 0;
public:
	MyStack(int capacity) : BaseArray(capacity) { ; }
	void push(int num) {
		put(top, num);
		top++;
	}
	int capacity() { return getCapacity(); }
	int length() { return top; }
	int pop() {
		top--;
		return get(top);
	}
};

