#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {	//������
		size = n; p = new int[n];	//n�� ���� �迭�� ���� ����
	}
	void read();	//���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
	void write();	//���� �迭�� ȭ�鿡 ���
	int big();		//���� �迭���� ���� ū �� ����
	~Sample();		//�Ҹ���
};

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big() {
	int mx = p[0];
	for (int i = 1; i < size; i++) {
		if (mx < p[i])
			mx = p[i];
	}
	return mx;
}
Sample::~Sample() {
	delete[] p;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}