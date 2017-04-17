// ArrayDecay.cpp

#include "stdafx.h"
#include <iostream>
using namespace std;

// passing array by value
void aDecay(int *p)
{
	cout << "size of modified array by passing value " << endl;
	cout << sizeof(p) << endl;
}

// even if we use pointer the array decay happens
void pDecay(int (*p)[7])
{
	cout << "Printing the size of the array is " << endl;
	cout << sizeof(p) << endl;
}

int main()
{
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	cout << "Actual size of the array is: " << endl;
	cout << sizeof(arr) << endl;

	// calling by value
	aDecay(arr);

	// calling function by pointer
	pDecay(&arr);

    return 0;
}

