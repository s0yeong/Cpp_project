#ifndef INTEGER_H
#define INTEGER_H
#include <string>
#define TRUE 1
#define FALSE 0
using namespace std;

class Integer {
	int num;
public:
	Integer(int n);
	Integer(string n);
	int get() {
		return num;
	}
	void set(int n);
	int isEven() {
		if (num % 2 == 0) return TRUE;
		else return FALSE;
	}
};


Integer::Integer(int n) {
	num = n;
}

Integer::Integer(string n) {
	num = stoi(n);
}

void Integer::set(int n) {
	num = n;
}

#endif
