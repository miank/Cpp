// PassByAddress.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void foo(int *ptr)
{
	*ptr = 6;
}

void printArray(int *array, int length)
{
	if (!array)
		return;
	for (int index = 0; index < length; ++index)
		cout << array[index];
}

int main()
{
	int value = 5;
	cout << "value = " << value << endl;
	foo(&value);
	cout << "value = " << value << endl;

	// Print array
	int array[6] = { 6,5,4,3,2,1 };
	printArray(array, 6);

    return 0;
}

