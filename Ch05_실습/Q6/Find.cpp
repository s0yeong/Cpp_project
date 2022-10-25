#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	int i = 0;
	while (a[i]) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		i++;
	}
	success = false;
	return a[0];
}

int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	loc = 'm';	//'M' ��ġ�� 'm' ���
	cout << s << endl;	//"mike"�� ��µ�
}