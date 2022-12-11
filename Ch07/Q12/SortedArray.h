#pragma once
class SortedArray
{
	int size;	//���� �迭�� ũ��
	int* p;		//���� �迭�� ���� ������
	void sort();	//���� �迭�� ������������ ����
public:
	SortedArray();	//p�� NULL�� size�� 0���� �ʱ�ȭ
	SortedArray(SortedArray& src);	//���� ������
	SortedArray(int p[], int size);	//������, ���� �迭�� ũ�� ���޹���
	~SortedArray();	//�Ҹ���
	SortedArray operator+ (SortedArray& op2);	//���� �迭�� op2 �迭 �߰�
	SortedArray& operator= (const SortedArray& op2); //���� �迭�� op2 �迭 ����
	void show();	//�迭�� ���� ���
};

