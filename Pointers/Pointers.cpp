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










    return 0;
}

