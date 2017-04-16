// Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int i = 9;
	// i = 6;  error const is changed @compile time
	
	const int *p1 = &i;  // data is const pointer is not
	
	// *p1 = 5; assignment of p1 will chnage the value of i
	p1++;
	
	int * const p2 = nullptr; // pointer is const data is not

	const int* const p3 = nullptr; // data and pointer are const

	int const *p4 = &i;

	// if const is on the left of * data is const;
	// if const is on the right of * pointer is const;


	const_cast<int&>(i) = 6; // not a good way casting away the constness



    return 0;
}

