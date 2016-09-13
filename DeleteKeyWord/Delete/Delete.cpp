// Delete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x;
	int *ptr1 = new int;
	int *ptr2 = nullptr;

	delete ptr1;
	delete ptr2;
    return 0;
}

