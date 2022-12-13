#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "WordQuiz.h"

bool WordQuiz::exists(int n[], int index)
{
	for (int i = 0; i < 4; i++) {
		if (n[i] == index)
			return true;
	}
	return false;
}

int WordQuiz::makeExample(int ex[], int ansIndex)
{
	int n[4] = { -1, -1, -1, -1 }; //-1로 초기화
	int index;
	
	for (int i = 0; i < 4; i++) {
		do {
			index = rand() % v.size();
		} while (index == ansIndex || exists(n, index));
		n[i] = index;
	}

	for (int i = 0; i < 4; i++) ex[i] = n[i];
	return rand() % 4;
	return 0;
}

WordQuiz::WordQuiz()
{
	Word wordlist[] = { Word("love", "사랑"), Word("animal", "동물"), Word("human", "인간"),
		Word("emotion", "감정"), Word("stock", "주식"), Word("trade", "거래"),
		Word("society", "사회"), Word("baby", "아기"), Word("honey", "애인"),
		Word("dall", "인형"), Word("bear", "곰"), Word("picture", "사진"), Word("painting", "그림"),
		Word("fault", "오류"), Word("example", "보기"), Word("eye", "눈"), Word("statue", "조각상") };

	for (int i = 0; i < 13; i++) {
		v.push_back(wordlist[i]);
	}
}

void WordQuiz::run()
{
	srand((unsigned)time(0));
	int n = rand();
	cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
	while (true) {
		int answerIndex = n % v.size();
		string eng = v[answerIndex].getEnglish();
		int korExample[4];
		int answerloc = makeExample(korExample, answerIndex); //정답이 있는 보기 번호
		korExample[answerloc] = answerIndex;

		cout << eng << "?" << endl;
		for (int i = 0; i < 4; i++) {
			cout << "(" << i + 1 << ")\t" << korExample[i] << "\t";
		}
		cout << ":>" << endl;

		int in;
		cin >> in;
		if (in < 1 || in>4)
			return;
		if ((in - 1) == answerloc)
			cout << "Excellent !!" << endl;
		else
			cout << "No. !!" << endl;
	}
}
