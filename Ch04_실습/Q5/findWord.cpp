#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string txt;
	srand((unsigned)time(0));

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while(true){
		cout << ">>";
		getline(cin, txt, '\n');

		if (txt == "exit")
			break;
		if (txt == "")
			continue;
		int size = txt.length();
		int idx = rand() % size;	//0���� RAND_MAX(32767) ������ ������ ���� �߻�
		int c = rand() % 26;		//0���� 25������ ������ ������ �߻�
		char changeChar = 'a' + c;	//�����Ҷ� ���� ������ ����

		if (txt[idx] == changeChar)	//���� ���ڿ� ���� ������ ���ڰ� ���ٸ�
			changeChar = 'A' + c;
		txt[idx] = changeChar;
		cout << txt << endl;
	}



}