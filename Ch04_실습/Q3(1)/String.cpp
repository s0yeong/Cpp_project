#include <iostream>
#include <string>
using namespace std;

int main()
{
	string txt;

	cout << "���ڿ� �Է� >> ";
	getline(cin, txt);

	int cnt = 0;
	for (int i = 0; i < txt.length(); i++) {
		if (txt[i] == 'a')
			cnt++;

	}
	cout << "���� a�� ����: " << cnt << endl;
	
}