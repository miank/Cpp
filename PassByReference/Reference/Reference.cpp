// Reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void foo(int &y) // Y is reference variable , if you make y as const you can't change it.
{
	y = y + 1;
} // y is destroyed here

int main()
{
	int value = 5;
	cout << "value = " << value << '\n';
	foo(value);
	cout << "value = " << value << '\n';
    return 0;
}

