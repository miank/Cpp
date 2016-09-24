// IncrDcrOp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = ++x;  // y is 5 and x is 6

	int x1 = 5, y1 = 5;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl; // prefix
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;
    return 0;
}

