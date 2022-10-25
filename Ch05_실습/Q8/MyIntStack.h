#ifndef MYINTSTACK_H
#define MYINTSTACK_H

class MyIntStack {
	int* p;		//스택 메모리로 사용할 포인터
	int size;	//스택의 최대 크기
	int tos;	//스택의 탑을 가리키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);	//복사 생성자
	~MyIntStack();
	bool push(int n);	//정수 n을 스택에 푸시한다.
		//스택이 꽉 차 있으면 false를, 아니면 true 리턴
	bool pop(int& n);	//스택의 탑에 있는 값을 n에 팝한다.
		//만일 스택이 비어있으면 false를, 아니면 true 리턴
};

#endif // !MYINTSTACK_H
