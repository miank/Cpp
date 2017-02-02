// PureVirtualFnc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// pure virtual function makes class abstract
class Base
{
	int x = 10;
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

// If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
class Derived1 : public Base
{

};

int main()
{
	//Base b; // You cannot create object of abstract class
	Derived d;
	d.fun();
	Base *p = new Derived();
	p->fun();
	cout << p->getX() << endl;
    return 0;
}

