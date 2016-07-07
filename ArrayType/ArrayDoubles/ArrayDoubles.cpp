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

	// The element in the array which are not initialized are set to 0
	int iArray[5] = { 7, 4, 5 };
	cout << iArray[0] << endl;
	cout << iArray[1] << endl;
	cout << iArray[2] << endl;
	cout << iArray[3] << endl;
	cout << iArray[4] << endl;
	
	return 0;
}

