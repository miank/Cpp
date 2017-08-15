// Casting.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello !" << endl << 2 + 2;
	cout << endl;

	// old way of casting
	int i = (int) 4.9;

	// New version of casting
	// fractional part will be lost
	i = static_cast<int>(4.9);
	cout << i << endl;

	cout << i << endl;
	auto j = 5;
	cout << j << endl;

	auto f = 4.9;
	j =static_cast<int>(f);
	cout << f << endl;
	f = 9.0 / 5;
	cout << f << endl;
	
    return 0;
}

