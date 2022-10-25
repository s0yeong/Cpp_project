#ifndef CONTAINER_H
#define CONTAINER_H

class Container {	//통 하나를 저장하는 클래스
	int size;		//현재 저장량, 최대 저장량은 10
public:
	Container() { size = 10; }
	void fill(int n);	//최대량(n)으로 채우기
	bool consume(int n);	//1만큼 소모하기
	int getSize(); //현재 크기 리턴
};

#endif
