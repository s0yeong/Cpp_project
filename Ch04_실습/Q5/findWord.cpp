#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string txt;
	srand((unsigned)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while(true){
		cout << ">>";
		getline(cin, txt, '\n');

		if (txt == "exit")
			break;
		if (txt == "")
			continue;
		int size = txt.length();
		int idx = rand() % size;	//0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
		int c = rand() % 26;		//0에서 25까지의 랜덤한 정수값 발생
		char changeChar = 'a' + c;	//수정할때 새로 삽입할 글자

		if (txt[idx] == changeChar)	//기존 문자와 새로 삽입할 문자가 같다면
			changeChar = 'A' + c;
		txt[idx] = changeChar;
		cout << txt << endl;
	}



}