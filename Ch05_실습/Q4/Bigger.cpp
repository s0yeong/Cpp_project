#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) { return true; }
	
	if (a > b) { big = a; }
	else { big = b; }
	return false;
}

int main()
{
	int x, y, big;
	bool ans;
	cout << "�� ������ �Է��ϼ���: ";
	cin >> x >> y;
	ans = bigger(x, y, big);
	if (ans)
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << "ū ���� " << big << endl;
}