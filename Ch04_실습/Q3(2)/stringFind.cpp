#include <iostream>
#include <string>
using namespace std;

int main()
{
	string txt;
	cout << "문자열 입력 >>";
	getline(cin, txt);
	
	int index = 0;
	int cnt = 0;
	while (true)
	{
		index = txt.find('a', index);
		if (index == -1) {
			return -1;
		}
		cnt++;
		index++;
	}
	cout << "문자열 a의 개수: " << cnt << endl;
}