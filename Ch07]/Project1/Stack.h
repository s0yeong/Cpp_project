#pragma once
class Stack
{
	int stack[10];
	int top;
public:
	Stack() { top = 0; }
	Stack& operator<< (int num);
	bool operator! ();
	Stack operator>> (int& x);
};

