#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;

	while (true)
	{
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")
			break;
		if (text == "")
			continue;
		int size = text.length();
		int n = size / 2;
		for (int i = 0; i < n; i++) {
			char tmp = text[i];
			text[i] = text[size - 1 - i];
			text[size - 1 - i] = tmp;
		}
		cout << text << endl;
	}
}