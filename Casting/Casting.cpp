// Casting.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello !" << endl << 2 + 2;
	cout << endl;

	int i;
	// fractional part will be lost
	i = 4.9;
	cout << i << endl;

	cout << i << endl;
	auto j = 5;
	cout << j << endl;

	auto f = 4.9;
	j = f;
	cout << f << endl;
	f = 9.0 / 5;
	cout << f << endl;
	
    return 0;
}

