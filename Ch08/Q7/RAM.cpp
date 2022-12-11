#include "RAM.h"
#include "BaseMemory.h"

char RAM::read(int i) {
	char mem = get_mem(i);
	return mem;
}
