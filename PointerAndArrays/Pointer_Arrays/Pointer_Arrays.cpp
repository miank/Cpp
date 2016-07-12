// Pointer_Arrays.cpp : Pointer and Arrays

#include "stdafx.h"
#include <iostream>

using namespace std;

void printSize(int *arr)   // int arr[] are identical - gets implicitly coonverted to *arr
{
	cout << sizeof(arr) << endl;
}

int main()
{
	int iArray[5] = { 9, 7, 5, 3, 1 };
	// Print the value of the array variable
	cout << "The array has address: " << iArray << endl;
	
	// print address of the array elements
	cout << "ELement 0 has the address: " << &iArray[0] << endl;

	// dereferencing the array
	cout << "dereferencing " << *iArray << endl;

	char cName[] = "Jason";
	cout << *cName << endl;

	int *iPtr = iArray;
	cout << *iPtr << endl;

	// Diff b/w Pointers and fixed array
	cout << "Size of iArray " << sizeof(iArray) << endl;

	cout << "Size of iPtr " << sizeof(iPtr) << endl;
	
	// Passing fixed arrays to function

	int iArray1[] = { 1, 1, 2, 3, 5, 8, 13, 21 };

	cout << sizeof(iArray1) << endl;
	printSize(iArray1);

	return 0;
}

