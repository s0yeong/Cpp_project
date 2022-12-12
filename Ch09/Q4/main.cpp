#include "DoWhileLoopAdder.h"
#include "LoopAdder.h"
#include "WhileLoopAdder.h"

int main()
{
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");

	whileLoop.run();
	doWhileLoop.run();
}