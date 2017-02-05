// Pointer.cpp : Basic Operations on pointers
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 11;
	int *p = &a;
	cout << a << endl;
	cout << *p << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << "After changing " << endl;
	*p = 12;
	cout << a << endl;
	cout << *p << endl;
	int b = 20;
	p = &b;
	cout << *p << endl;

	int d = 22;
	int *m = &d;
	cout << *m << endl;
    return 0;
}

