#include "BaseMemory.h"
#include "RAM.h"
#include "ROM.h"

#include <iostream>
using namespace std;

int main()
{
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);	//10KB�� ROM �޸�. �迭 x�� �ʱ�ȭ��
	RAM mainMemory(1024 * 1024);	//1MB�� RAM �޸�

	//0�������� 4�������� biosROM���� �о� mainMemory�� ����
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}