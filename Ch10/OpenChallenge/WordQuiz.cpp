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
	int n[4] = { -1, -1, -1, -1 }; //-1�� �ʱ�ȭ
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
	Word wordlist[] = { Word("love", "���"), Word("animal", "����"), Word("human", "�ΰ�"),
		Word("emotion", "����"), Word("stock", "�ֽ�"), Word("trade", "�ŷ�"),
		Word("society", "��ȸ"), Word("baby", "�Ʊ�"), Word("honey", "����"),
		Word("dall", "����"), Word("bear", "��"), Word("picture", "����"), Word("painting", "�׸�"),
		Word("fault", "����"), Word("example", "����"), Word("eye", "��"), Word("statue", "������") };

	for (int i = 0; i < 13; i++) {
		v.push_back(wordlist[i]);
	}
}

void WordQuiz::run()
{
	srand((unsigned)time(0));
	int n = rand();
	cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� �����մϴ�." << endl;
	while (true) {
		int answerIndex = n % v.size();
		string eng = v[answerIndex].getEnglish();
		int korExample[4];
		int answerloc = makeExample(korExample, answerIndex); //������ �ִ� ���� ��ȣ
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
