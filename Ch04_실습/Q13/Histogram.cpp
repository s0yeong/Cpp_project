#include "Histogram.h"
#include <iostream>
#include <string>
using namespace std;

Histogram::Histogram() {
	this->text = "";
}

Histogram::Histogram(string text) {
	this->text = text;
}

void Histogram::put(string text) {
	this->text.append(text);	//���� ���ڿ��� text ���ڿ� ������
}

void Histogram::putc(char c) {
	char buf[] = { c, '\0'};
	this->text.append(buf);

	// text += c; �� ����
}

void Histogram::print() {
	for (int i = 0; i < 26; i++)
		h[i] = 0;		//h �迭�� 0���� �ʱ�ȭ

	cout << text << endl << endl;

	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i])) {	//���ĺ��� ���ؼ��� ó��
			char c = tolower(text[i]);	//�빮���� ��쿡�� �ҹ��ڷ� ��ȯ�ϴ� �Լ�
			h[c - 'a']++;
		}
	}

	int n = 0;
	for (int i = 0; i < 26; i++) n += h[i];	//��ü ���ĺ� �� ���ϱ�
	cout << "�� ���ĺ� �� " << n << endl;
	cout << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << " (" << h[i] << ")" << '\t' << ": ";
		for (int j = 0; j < h[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}