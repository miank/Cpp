// UncheckedExceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun(int *ptr, int x)
{
	if (ptr == nullptr)
		throw ptr;
	if (x == 0)
		throw x;
}
int main()
{
	try {
		fun(NULL, 0);
	}
	catch (...) 
	{
		cout << "Caught exceptions from fun() " << endl;
	}
    return 0;
}

