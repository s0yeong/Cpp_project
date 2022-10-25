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
	this->text.append(text);	//기존 문자열에 text 문자열 덧붙임
}

void Histogram::putc(char c) {
	char buf[] = { c, '\0'};
	this->text.append(buf);

	// text += c; 와 동일
}

void Histogram::print() {
	for (int i = 0; i < 26; i++)
		h[i] = 0;		//h 배열을 0으로 초기화

	cout << text << endl << endl;

	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i])) {	//알파벳에 대해서만 처리
			char c = tolower(text[i]);	//대문자인 경우에만 소문자로 반환하는 함수
			h[c - 'a']++;
		}
	}

	int n = 0;
	for (int i = 0; i < 26; i++) n += h[i];	//전체 알파벳 수 더하기
	cout << "총 알파벳 수 " << n << endl;
	cout << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << " (" << h[i] << ")" << '\t' << ": ";
		for (int j = 0; j < h[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}