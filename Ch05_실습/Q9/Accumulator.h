#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }	//매개 변수 value로 멤버 value를 초기화한다.
	Accumulator& add(int n);	//value에 n을 더해 값을 누적하다.
	int get() {return value; }	//누적된 값 value를 리턴한다.
};

#endif // !ACCUMULATOR_H

