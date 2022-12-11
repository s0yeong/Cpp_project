#include "SortedArray.h"
#include <cstddef>
#include <iostream>
using namespace std;

SortedArray::SortedArray() {
	p = NULL;
	size = 0;
}

SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[this->size];
	for(int i=0; i<this->size; i++) {
		this->p[i] = src.p[i];
	}
}

SortedArray::SortedArray(int p[], int size) {
	this->p = new int[size];
	this->size = size;
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
}

SortedArray::~SortedArray() {
	if (p) delete[] p;
}

SortedArray SortedArray::operator+ (SortedArray& op2) {
	SortedArray arr;
	arr.size = this->size + op2.size;
	arr.p = new int[arr.size];
	for (int i = 0; i < arr.size; i++) {
		if (i < this->size)
			arr.p[i] = this->p[i];
		else
			arr.p[i] = op2.p[i-(arr.size-op2.size)];
	}

	return arr;
}

SortedArray& SortedArray::operator= (const SortedArray& op2) {
	delete[] p;
	this->size = op2.size;
	this->p = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->p[i] = op2.p[i];
	}

	return *this;
}

void SortedArray::show() {
	sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

void SortedArray::sort() {
	int tmp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (p[i] < p[j] || p[i] == p[j]);
			else {
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}