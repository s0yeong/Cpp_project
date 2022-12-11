#pragma once

#include "BaseArray.h"

class MyQueue : public BaseArray
{
	int front = 0;
	int rear = 0;	//�����͸� put�� �� �ִ� ��ġ
public:
	MyQueue(int capacity) : BaseArray(capacity) { ; }
	void enqueue(int num);
	int capacity() { return getCapacity(); }
	int length() { return rear; }
	int dequeue();
};

