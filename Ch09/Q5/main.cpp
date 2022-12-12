#include <iostream>
using namespace std;

#include "AbstractGate.h"
#include "ANDGate.h"
#include "ORGate.h"
#include "XORGate.h"

int main()
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);

	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}