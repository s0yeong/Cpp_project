#include <iostream>
#include "Circle.h"
#include "CirlceManager.h"
using namespace std;

int main()
{
	CircleManager* pManager;
	cout << "���� ���� >> ";
	int size;

	cin >> size;
	if (size <= 0) {
		cout << "����� �Է��ϼ���. " << endl;
		return 0;
	}
	pManager = new CircleManager(size);
	pManager->searchByName();
	pManager->searchByArea();
	delete pManager;


}