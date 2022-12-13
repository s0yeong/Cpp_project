#pragma once

#include <vector>
using namespace std;

#include "Word.h"

class WordQuiz
{
	vector<Word> v;
	bool exists(int n[], int index);
	int makeExample(int ex[], int ansIndex);
public:
	WordQuiz();
	void run();
};

