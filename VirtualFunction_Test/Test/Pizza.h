#pragma once
#include <iostream>
using namespace std;

#include "OrderManager.h"

class Pizza : public OrderManager
{
public:
	Pizza(string menu, int tableNo, int price);
	void recipe() {cout << "cooking Pizza" << endl; }

};

