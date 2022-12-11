#include "Stack.h"

Stack& Stack::operator<< (int num) {
	stack[top] = num;
	top++;
	return *this;
}
bool Stack::operator! () {
	if (top)
		return false;
	else
		return true;
}
Stack Stack::operator>> (int& x) {
	x = stack[top - 1];
	top--;
	return *this;
}