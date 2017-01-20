// ReferenceVari.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int iValue(5);  // Normal integer
	int &ref = iValue; // reference to variable value
	iValue = 6; // value is now 6
	ref = 7; // value is now 7

	cout << "The value is " << iValue << endl; // print 7
	++ref;
	cout << "The value is " << iValue << endl; // print 8
	// Ref and Val are synonymous
	cout << &iValue << endl;
	cout << &ref << endl;

	int iValue1(11);
	int iValue2(22);
	// Reference must be initialized
	// int &ref0;
	int &ref1 = iValue1;
	ref1 = iValue2;

	cout << ref1 << endl;

    return 0;
}

