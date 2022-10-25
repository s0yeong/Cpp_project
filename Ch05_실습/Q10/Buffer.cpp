#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }		//text�� next ���ڿ� �����̱�
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string text) {
	buf.add(text);
	return buf;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); //buf�� ���ڿ��� "Guys" ������
	temp.print();
	buf.print();
}