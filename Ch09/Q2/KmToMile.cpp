#include "KmToMile.h"
double KmToMile::convert(double src)
{
	return src / 1.609344;
}
string KmToMile::getSourceString()
{
	return "Km";
}
string KmToMile::getDestString()
{
	return "Mile";
}