// ArrayArg.cpp : Array as argument.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Double(int  A[], int size)
{
	int i, sum = 0;
	for (int i = 0; i < size; i++)
	{
		A[i] = 2 * A[i];
	}
}
int SumOfElements(int A[], int size)
{
	int i, sum = 0;
	cout << "Size of sizeOf (A) " << sizeof(A) << " and sizeOf (A[0]) " << sizeof(A[0]) << endl;
	for (int i = 0; i < size; i++)
	{
		sum = sum + A[i];
	}
	return sum;
}

int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);	
	cout << "Size of sizeOf (A) " << sizeof(A) << " and sizeOf (A[0]) " << sizeof(A[0]) << endl;
	cout << "Sum of elements is " << total << endl;

	Double(A, size);
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << endl;
	}
    return 0;
}

