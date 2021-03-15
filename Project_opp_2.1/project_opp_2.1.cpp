#include "Pay.h"
#include <iostream>
using namespace std;

int main()
{
	Pay a(1, 1);

	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	Pay x;
	cout << "Input  value ->" << endl;
	cin >> x;
	double w;
	cout << "Working days = ";cin >> w;
	cout << "Summa = " << x.Summa(w) << endl;
	cin.get();
	return 0;

}