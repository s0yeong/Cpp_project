#pragma once
class AbstractStack
{
public:
	virtual bool push(int n) = 0;	//���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0;	//���ÿ��� ���� ������ n�� �����ϰ� ������ empty�̸� false ����
	virtual int size() = 0;		//���� ���ÿ� ����� ������ ���� ����
};

