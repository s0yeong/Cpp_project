#include "IntStack.h"

IntStack::IntStack(int size)
{
	p = new int[size];
	this->capacity = size;
	tos = 0;
}
IntStack::~IntStack()
{
	if (p)
		delete[] p;
}
bool IntStack::push(int n)
{
	if (tos >= capacity) //full
	{
		return false;
	}
	p[tos] = n;
	tos++;
	return true;
}
bool IntStack::pop(int& n)
{
	if (tos == 0) //empty
	{
		return false;
	}
	tos--;
	n = p[tos];
	return true;
}