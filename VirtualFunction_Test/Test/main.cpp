#include <iostream>
using namespace std;

#include "OrderManager.h"
#include "Pasta.h"
#include "Pizza.h"

int main()
{
	OrderManager* menu[5];
	OrderManager price(" ", 0, 0);
	for (int i = 0; i < 5; i++) {
		menu[i] = nullptr;
	}
	
	menu[0] = new Pasta("�Ľ�Ÿ", 1, 13000);
	menu[1] = new Pizza("����", 1, 20000);
	menu[2] = new Pasta("�Ľ�Ÿ", 2, 13000);
	menu[3] = new Pasta("�Ľ�Ÿ", 2, 13000);

	for (int i = 0; i < 4; i++) {
		menu[i]->recipe();
		price = price + menu[i];
	}
	cout << "�� ���� �ݾ�: " << price.getPrice() << endl;


	for (int i = 0; i < 4; i++) delete menu[i];
	
}