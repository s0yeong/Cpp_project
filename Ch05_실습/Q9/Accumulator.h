#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }	//�Ű� ���� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator& add(int n);	//value�� n�� ���� ���� �����ϴ�.
	int get() {return value; }	//������ �� value�� �����Ѵ�.
};

#endif // !ACCUMULATOR_H

