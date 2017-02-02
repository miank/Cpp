// PureVirtualFnc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// pure virtual function makes class abstract
class Base
{
	int x;
public:
	// Pure virtual functions 
	virtual void fun() = 0;
	int getX() { return x; }
};

class Derived : public Base
{
	int y;
public:
	void fun() 
	{
		cout << "fun() called " << endl;
	}
};

int main()
{
	Derived d;
	d.fun();
    return 0;
}

