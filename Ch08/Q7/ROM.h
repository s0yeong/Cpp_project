#pragma once
#include <string>
using namespace std;

#include "BaseMemory.h"

class ROM : public BaseMemory
{
public:
	ROM(long int mem_size, char* x, int arr_size) :BaseMemory(mem_size) { set_mem(x); }
	char read(int i);
};

