#include "MyIntStack.h"

MyIntStack::MyIntStack() {
	size = 10;
	tos = 0;
	p = new int[size];	//스택 메모리 할당
}

MyIntStack::MyIntStack(int size) {
	this->size = size;
	tos = 0;
	p = new int[size];	//스택 메모리 할당
}

MyIntStack::MyIntStack(const MyIntStack& s) {
	size = s.size;
	tos = s.tos;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = s.p[i];	//원본 객체의 메모리 복사
	}
}

MyIntStack::~MyIntStack() {
	if (p)
		delete[] p;	//스택 메모리 반환
}

bool MyIntStack::push(int n) {
	if (tos == 10)
		return false;	//stack full
	p[tos] = n;
	tos++;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0) {
		return false;	//stack empty
	}
	tos--;
	n = p[tos];
	return true;
}
