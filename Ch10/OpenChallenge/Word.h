#pragma once

#include <string>
using namespace std;

class Word
{
	string english;
	string korean;
public:
	Word(string english, string korean);
	string getEnglish() { return english; }
	string getKorean() { return korean; }
};

