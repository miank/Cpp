// PointersAndReferences.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	cout << "a is " << a << endl;
	int *pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a is " << a << ", *pA " << *pA << endl;
	
    return 0;
}

