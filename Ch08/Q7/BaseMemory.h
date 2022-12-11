#pragma once
class BaseMemory
{
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void set_mem(char* x) { mem = x; }
	char get_mem(int i) { return mem[i]; }
	void put_mem(int i, char copy) { mem[i] = copy; }
};

