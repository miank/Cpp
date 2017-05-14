// LocalVariables.cpp

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i(0); // direct initialization
	int a = 7 / 4;
	int j = 7 / 2;

	cout << i << endl << a << endl << j << endl;

	float f = 4.9;
	cout << f << endl;
	f = 9.0 / 5;
	cout << f << endl;

	auto q = 2.9;
	cout << q << endl;
    return 0;
}

