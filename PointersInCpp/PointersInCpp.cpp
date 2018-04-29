// PointersInCpp.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x(10);
	cout << &x << endl;
	int *ptr;
	ptr = &x;
	cout << *ptr << endl;
	cout << ptr << endl;
	*ptr = 20;
	cout << *ptr << endl;

	//  pointer arithmetic
	int v[3] = { 10, 20, 30 };
	ptr = v;
	for (int i = 0; i < 3; i++)
	{
		cout << *ptr << "  "<< ptr << endl;
		ptr++;
	}


    return 0;
}

