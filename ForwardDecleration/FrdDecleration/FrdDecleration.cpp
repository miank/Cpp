// FrdDecleration.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main()
{
	cout << "The addition of 3 and 4 is: " << add(3, 4) << endl;
    return 0;
}

