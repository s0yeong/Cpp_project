#ifndef CONTAINER_H
#define CONTAINER_H

class Container {	//�� �ϳ��� �����ϴ� Ŭ����
	int size;		//���� ���差, �ִ� ���差�� 10
public:
	Container() { size = 10; }
	void fill(int n);	//�ִ뷮(n)���� ä���
	bool consume(int n);	//1��ŭ �Ҹ��ϱ�
	int getSize(); //���� ũ�� ����
};

#endif
