#include "WonToDollar.h"

double WonToDollar::convert(double src)
{
	return src / won;
}
string WonToDollar::getSourceString()
{
	return "��";
}
string WonToDollar::getDestString()
{
	return "�޷�";
}
