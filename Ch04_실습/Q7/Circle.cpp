#include <iostream>
using namespace std;

class Circle {
	int radius; //���� ������ ��
public:
	void setRadius(int radius);	//�������� �����Ѵ�.
	double getArea();	//������ �����Ѵ�.
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
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circle[i].setRadius(r);
	}

	for (int i = 0; i < 3; i++) {
		if (100 < circle[i].getArea())
			cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�" << endl;

}