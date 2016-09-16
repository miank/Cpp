// Reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void foo(int &y) // Y is reference variable
{
	y = y + 1;
}

int main()
{
	int value = 5;
	cout << "value = " << value << '\n';
	foo(value);
	cout << "value = " << value << '\n';
    return 0;
}

