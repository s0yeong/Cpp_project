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
	cout << "두 정수를 입력하세요: ";
	cin >> x >> y;
	ans = bigger(x, y, big);
	if (ans)
		cout << "두 수는 동일하다." << endl;
	else
		cout << "큰 수는 " << big << endl;
}