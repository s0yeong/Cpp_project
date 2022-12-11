#include <iostream>
using namespace std;

#include "Matrix.h"

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };	//2차원 행렬의 4개의 원소 값
	a >> x;		//a의 각 원소를 배열 x에 복사. x[]는 {4,3,2,1}
	b << y;		//배열 y의 원소 값을 b의 각 원소에 설정

	for (int i = 0; i < 4; i++) cout << x[i] << ' '; //x[] 출력
	cout << endl;
	b.show();
}