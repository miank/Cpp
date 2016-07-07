// ArrayDoubles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double dArray[3]; // Allocate 3 doubles
	dArray[0] = 2.0;
	dArray[1] = 3.0;
	dArray[2] = 4.2;

	cout << "The average is " << (dArray[0] + dArray[1] + dArray[2]) / 3 << "\n";
	return 0;
}

