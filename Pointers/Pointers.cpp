// Pointers.cpp : 

#include "stdafx.h"
#include <iostream>
using namespace std;

// Pointer store the address of memory location

int main()
{
	int x;
	cout << &x << endl;

	int var = 10;
	int *ptr = &var;

	cout << *ptr << " " << ptr << endl;

	*ptr = 20;
	cout << *ptr << " " << ptr << endl;

	int v[3] = { 10, 20, 30 };
	int *ptr1 = v;

	for (int i= 0; i < 3; i++)
	{
		cout << *ptr1 << " "<< ptr1 << endl;
		ptr1++;
	}

	int *ptr2;
	ptr2 = v;

	cout << "Elements of the array are " << ptr2[0] << " " << ptr2[1] << " " << ptr2[2] << endl;

	// ----------------------------------------------------------------------------------------
	int a; 
	&a; // Address
	int *b = nullptr; // declaring a integer pointer 
	double *d = nullptr; // declaring the double pointer
	float *f(nullptr);


    return 0;
}

