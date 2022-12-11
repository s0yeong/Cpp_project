#include "Matrix.h"
#include <iostream>
using namespace std;

void Matrix::show()
{
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++) {
		cout << this->num[i] << " ";
	}
	cout << "}" << endl;
}
Matrix Matrix::operator+ (Matrix m)
{
	Matrix t;
	for (int i = 0; i < 4; i++) {
		t.num[i] = this->num[i] + m.num[i];
	}
	return t;
}
Matrix Matrix::operator+= (Matrix& m)
{
	for (int i = 0; i < 4; i++) {
		this->num[i] += m.num[i];
	}

	return *this;
}
bool Matrix::operator== (Matrix m)
{
	for (int i = 0; i < 4; i++) {
		if (this->num[i] != m.num[i])
			return false;
	}
	return true;
}