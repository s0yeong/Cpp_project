#pragma once
#include <string>
using namespace std;

class OrderManager
{
	int tableNo;
	int price;
	string menu;
public:
	OrderManager(string m = "", int tNo = 0, int p = 0) { menu = m; tableNo = tNo; price = p; }
	virtual void recipe() { return; }
	int getTableNo() { return tableNo; }
	int getPrice() { return price; }
	OrderManager operator+ (OrderManager* menu);
	OrderManager operator+= (OrderManager* menu);

};

