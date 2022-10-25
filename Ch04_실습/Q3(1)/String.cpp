#include <iostream>
#include <string>
using namespace std;

int main()
{
	string txt;

	cout << "문자열 입력 >> ";
	getline(cin, txt);

	int cnt = 0;
	for (int i = 0; i < txt.length(); i++) {
		if (txt[i] == 'a')
			cnt++;

	}
	cout << "문자 a의 개수: " << cnt << endl;
	
}