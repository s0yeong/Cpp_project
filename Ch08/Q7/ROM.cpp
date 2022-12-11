#include "ROM.h"
#include "BaseMemory.h"

char ROM::read(int i) {
	char mem = get_mem(i);
	return mem;
}
