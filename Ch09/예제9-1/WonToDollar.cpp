#include "WonToDollar.h"

double WonToDollar::convert(double src)
{
	return src / won;
}
string WonToDollar::getSourceString()
{
	return "¿ø";
}
string WonToDollar::getDestString()
{
	return "´Þ·¯";
}
