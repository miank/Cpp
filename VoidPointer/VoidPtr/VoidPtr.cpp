// VoidPtr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{ };

int main()
{
	void *ptr;
	int nValue(0);
	int fValue(0);

	A obj;
	ptr = &obj;
	ptr = &nValue;

	int value = 5;
	void *voidPtr = &value;
	int *intPtr = static_cast<int*>(voidPtr);
	cout << intPtr << endl;

    return 0;
}

