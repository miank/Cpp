// Initialization.cpp : Initialization using constructor.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class A
{
	int i;
public:
	A(int);
};

A::A(int arg) {
	i = arg;
	cout << "A's constructor called: Value of i: " << i << endl;
}

// Class B contains object of A
class B
{
	A a;
public:
	B(int);
};

// For initialization of base class members
B::B(int x) :a(x) {
	cout << "B's constructor called" << endl;
}

int main()
{
	B obj(10);
    return 0;
}

