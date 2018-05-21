// VirtualDestructor.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "I am from base constructor " << endl;
	}

	virtual ~Base()
	{
		cout << "I am from base destructor " << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "I am from derived constructor " << endl;
	}
	virtual ~Derived()
	{
		cout << "I am from derived destructor " << endl;
	}			 
};

int main()
{
	Base *b = new Base();
	b = new Derived();
	delete b;
	return 0;
}

