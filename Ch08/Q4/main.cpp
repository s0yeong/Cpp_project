#include <iostream>
using namespace std;

#include "Point.h"
#include "ColorPoint.h"

int main()
{
	ColorPoint zeroPoint;	//BLACK ���� (0,0) ��ġ�� ��
	zeroPoint.show();		//zeroPoint�� ����Ѵ�.

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();				//cp�� ����Ѵ�.
}