#include <iostream>
using namespace std;

int main()
{
	int* p = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}

	double sum = 0.0;
	for (int i = 0; i < 5; i++) {
		sum += p[i];
	}
	cout << "ЦђБе = " << sum / 5 << endl;
	
	delete[] p;
}