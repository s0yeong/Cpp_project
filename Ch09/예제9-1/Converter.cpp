#include "Converter.h"

void Converter::run()
{
	double src;
	cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
	cout << getSourceString() << "�� �Է��ϼ���>> ";
	cin >> src;
	cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
}
