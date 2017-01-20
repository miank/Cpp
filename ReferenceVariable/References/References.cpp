// References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void changeN(int &ref)
{
	ref = 6;
}

int main()
{
	int value = 5;
	int &ref = value;
	value = 6;
	ref = 7;
	cout << value << endl;
	ref++;
	cout << ref << endl;

	cout << &ref << endl; // both address are same
	cout << &value << endl; // both address are same
	
	// References are treated as constant 
	// they must be initialized.
	const int x = 5;
	const int &ref1 = x;

	cout << "References as paramters " << endl;
	int n(5);
	cout << n << endl;
	changeN(n);
	cout << n << endl;


    return 0;
}

