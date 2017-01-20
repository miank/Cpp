// Auto.cpp : Prior to C++11, the auto keyword was probably the least used keyword in C++. 
// Local variables and local scope, you learned that local variables have automatic duration
// (they’re created at the point of definition, and destroyed when the block they are part of is exited).

// Starting with C++11, the auto keyword does just that. When initializing a variable, 
// the auto keyword can be used in place of the variable type to tell the compiler to infer the 
// variable’s type from the assignment’s type. This is called automatic type deduction.

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
// Other way to assign auto keyowrd. 

auto add(int a, int b, int c);

int main()
{
	auto sum = add(5, 6);
	cout << sum << endl;

    return 0;
}

