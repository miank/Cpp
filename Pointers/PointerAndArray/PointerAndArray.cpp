// PointerAndArray.cpp : Pointer and arrays 
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int arr[5]{ 1,2,3,4,5 };
	int *p;
	p = &arr[0];

	cout << "Value of *p " << *p << " address p is " << p << " and arr[0] " << arr[0] << endl;
	cout << "Value of *(p + 1) " << *(p + 1) << endl;
	cout << "Value of (p + 1) " << (p + 1) << endl;
	cout << arr << endl;
	cout << &arr[0] << endl;
	cout << arr[0] << endl;
	cout << &arr[0 + 1] << endl;
	cout << arr[0 + 1] << endl;
	cout << &arr[1] << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Address " << &arr[i] << endl;
		cout << "Address " << arr + i << endl;
		cout << "Address " << arr[i] << endl;
		cout << "Address " << *(arr+i) << endl;
	}
    return 0;
}

