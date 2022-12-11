#include <iostream>
using namespace std;

#include "Matrix.h"

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++) {
		cout << this->num[i] << " ";
	}
	cout << "}" << endl;
}
void Matrix::operator>> (int x[])
{
	for (int i = 0; i < 4; i++) {
		x[i] = this->num[i];
	}
}
void Matrix::operator<< (int y[])
{
	for (int i = 0; i < 4; i++) {
		this->num[i] = y[i];
	}
}