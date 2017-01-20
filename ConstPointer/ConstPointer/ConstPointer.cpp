// ConstPointer.cpp 
// Hypothetically, if we could set a non-const pointer to a const value,
// then we would be able to dereference the non-const pointer and change the value. 
// That would violate the intention of const.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int value = 5;
	int *ptr = &value;
	*ptr = 6; // value can be changed.

	// If pointer is const
	const int value1 = 5;
	const int *ptr1 = &value1;
	*ptr1 = 6; // Error

	int value2 = 8;
	const int *p = &value2;
	// a pointer to a constant variable treats the variable as constant when it is accessed through the pointer, 
	// regardless of whether the variable was initially defined as const or not.
	value2 = 11; // Still fine 

	*p = 22; // Error so changing the value via *p is not legal

	int a = 11;
	int *t = &a;
	a = 12;




    return 0;
}

