#include <iostream>
#include "Circle.h"
#include "CirlceManager.h"
using namespace std;

int main()
{
	CircleManager* pManager;
	cout << "원의 개수 >> ";
	int size;

	cin >> size;
	if (size <= 0) {
		cout << "양수를 입력하세요. " << endl;
		return 0;
	}
	pManager = new CircleManager(size);
	pManager->searchByName();
	pManager->searchByArea();
	delete pManager;


}