#include "MyIntStack.h"

MyIntStack::MyIntStack() {
	tos = 0;
}

bool MyIntStack::push(int n) {
	if (tos == 10)
		return false;	//stack full
	p[tos] = n;
	tos++;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0)
		return false;	//stack empty
	tos--;
	n = p[tos];
	return true;
}