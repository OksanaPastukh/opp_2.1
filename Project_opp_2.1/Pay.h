#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pay
{
	double first;
	int second;
public:
	Pay();
	Pay(double, int);
	Pay(const Pay&);
	~Pay();
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	bool SetFirst(double value);
	bool SetSecond(int value);

	Pay& operator = (const Pay&);
	operator string() const;

	friend ostream& operator << (ostream&, const Pay&);
	friend istream& operator >> (istream&, Pay&);
	Pay& operator ++();
	Pay& operator --();
	Pay operator ++(int);
	Pay operator --(int);
	double Summa(int countDayInMonth);
};

