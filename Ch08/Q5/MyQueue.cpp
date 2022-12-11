#include "MyQueue.h"
#include "BaseArray.h"

#include <iostream>
using namespace std;

void MyQueue::enqueue(int num)
{
	if (rear >= getCapacity()) {
		cout << "Queue is full";
		exit(1);
	}
	rear++;
	put(rear, num);
}
int MyQueue::dequeue()
{
	if (rear < 0) {
		cout << "Queue is empty";
		exit(1);
	}
	++front;
	rear--;
	return get(front);
}
