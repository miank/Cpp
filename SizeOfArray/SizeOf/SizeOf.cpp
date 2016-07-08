// SizeOf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int arrMyArray[]{1, 1, 2, 3, 5, 8, 13, 21};
	cout << "The array has: " << sizeof(arrMyArray) / sizeof(arrMyArray[0]) << "elements \n";

	return 0;
}

