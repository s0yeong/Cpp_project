#include "Converter.h"

void Converter::run()
{
	double src;
	cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
	cout << getSourceString() << "을 입력하세요>> ";
	cin >> src;
	cout << "변환 결과 : " << convert(src) << getDestString() << endl;
}
