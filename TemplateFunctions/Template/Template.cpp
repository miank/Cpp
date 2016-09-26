// Template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// ---------------------------------------------------
template <class T>
T abs(T n) {
	return (n < 0) ? -n : n;}

// ---------------------------------------------------

int main()
{
	int int1 = 5;
	int int2 = -6;
	long lon1 = 70000L;
	long lon2 = -80000L;
	double dub1 = 9.95;
	double dub2 = -10.15;

	cout << "\n abs ("<< int1 << ")=" << abs(int1); // abs(int)
	cout << "\n abs (" << int2 << ")=" << abs(int2); // abs(int)
	cout << "\n abs (" << lon1 << ")=" << abs(lon1); // abs(long)
	cout << "\n abs (" << lon2 << ")=" << abs(lon2); // abs(long)
	cout << "\n abs (" << dub1 << ")=" << abs(dub2); // abs(double)
	cout << "\n abs (" << dub2 << ")=" << abs(dub2); // abs(double)
	cout << endl;
    return 0;
}

