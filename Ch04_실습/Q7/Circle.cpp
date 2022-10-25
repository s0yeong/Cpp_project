#include <iostream>
using namespace std;

class Circle {
	int radius; //원의 반지름 값
public:
	void setRadius(int radius);	//반지름을 설정한다.
	double getArea();	//면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{	
	Circle circle[3];
	int r;
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circle[i].setRadius(r);
	}

	for (int i = 0; i < 3; i++) {
		if (100 < circle[i].getArea())
			cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;

}