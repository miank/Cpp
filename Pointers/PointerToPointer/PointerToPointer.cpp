// PointerToPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int *p = &a;
	*p = 6;
	int **q;
	int ***r;
	q = &p;
	r = &q;
	cout << a << endl;
	cout << *p << endl;
	cout << **q << endl;
	cout << ***r << endl;
    return 0;
}

