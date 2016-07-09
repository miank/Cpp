// Pointers.cpp : Intro to Pointers in C++
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// The address of Operator 
	int x(5);
	cout << x << "\n";  // Prints the value of x
	cout << &x << "\n"; // Prints the value of address of variable x

	// The derefernce operator 
	int x1(5);
	cout << x1 << "\n"; // prints the value of variable of x;
	cout << &x1 << "\n"; // prints the address  of variable x;
	cout << *(&x1) << "\n"; // prints the value of memeory address of variable x

	// Pointers 
	// while declaring pointer variable, we recommend putting the asterisk next to the variable name
	// while returning the pointers from a function it is clear to put asterisk next to int type

	// E.g. int *a;
	// E.g. int* doSomething();

	int value = 5;
	int *ptr = &value;
	cout << "Value address " << &value << "\n";
	cout << ptr << "\n";
	
	return 0;
}

