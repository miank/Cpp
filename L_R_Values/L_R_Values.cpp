// L_R_Values.cpp

#include "stdafx.h"
#include <iostream>

int main()
{
	int x = 5;
	// For variables which has address are LVALUES 
	// These are the one on the left side of the assignment
	// The left side of an operator will be an LVALUE
	std::cout << &x << std::endl;
	// RVALUES are the one which are not associated with any address
	// 5 , x + 2 which evaluvate to single numbers


    return 0;
}

