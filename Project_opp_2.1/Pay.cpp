#include "Pay.h"
#include <sstream>

Pay::Pay()
{
	first= 0;
	second = 0;
}
Pay::Pay(double f = 0, int s = 0)
{
	 SetFirst(f);
	 SetSecond(s);
}
Pay::Pay(const Pay& p)
{
	first = p.first;
	second = p.second;
}
Pay::~Pay()
{ }
bool Pay::SetFirst(double value)
{
	if (value >= 0)
	{
		first = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Pay::SetSecond(int value)
{
	if (value >= 0)
	{
		second = value;
		return true;
	}
	else
	{
		return false;
	}
}
Pay& Pay::operator = (const Pay& p)
{
	first = p.first;
	second = p.second;
	return *this;
}
Pay::operator string () const
{
	stringstream ss;
	ss << " Oklad = " << first << endl;
	ss << "Days worked  = " << second << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Pay& p)
{
	out << string(p);
	return out;
}
istream& operator >> (istream& in, Pay& p)
{
	double value;
	cout << "  Oklad = "; in >> value;
	p.SetFirst(value);
	cout << " Days worked = "; in >>value;
	p.SetSecond(value);
	cout << endl;
	return in;
}
Pay& Pay::operator ++()
{
	++first;
	return *this;
}
Pay& Pay::operator --()
{
	--first;
	return *this;
}
Pay Pay::operator ++(int)
{
	Pay t(*this);
	second ++;
	return t;
}
Pay Pay::operator --(int)
{
	Pay t(*this);
	second --;
	return t;
}
double Pay::Summa(int countDayInMonth)
{
	return (first / (1. * countDayInMonth))* (1. * second);
}