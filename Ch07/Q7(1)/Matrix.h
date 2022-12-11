#pragma once
class Matrix
{
	int num[4];
public:
	Matrix() { ; }
	Matrix(int a, int b, int c, int d) {
		num[0] = a; num[1] = b; num[2] = c; num[3] = d;
	}
	void show();
	void operator>> (int x[]);
	void operator<< (int y[]);

};

