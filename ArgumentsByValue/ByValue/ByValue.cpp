// ByValue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void foo(int y)
{
	cout << "y = " << y << endl;
}

int main()
{
	foo(5);
	int x = 6;
	foo(x);
	foo(x + 1);
    return 0;
}

