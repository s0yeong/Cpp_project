#pragma once
#include <iostream>
#include <string>
using namespace std;


#include "OrderManager.h"

class Pasta : public OrderManager
{
public:
	Pasta(string menu, int tableNo, int price);
	void recipe() { cout << "cooking pasta" << endl; }
};

