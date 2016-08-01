// AcessSpecifiers.cpp : Defines the entry point for the console application.
// Demonstrating how member variables are being accessed based on acess specifiers.

#include "stdafx.h"
#include <iostream>

using namespace std;

class Base
{
public:
	int m_iPublic; // can be accessed by anybody
private:
	int m_iPrivate; // can be accessed only by base class
protected:
	int m_iProtected; // can be accessed by base member functions, or immediate derived classes.
};

class Derived : public Base
{
public:
	Derived()
	{
		// Derived classes access to base members is not influenced by the type of inheritance used.
		// Not allowed
		//m_iPrivate = 1
		m_iPublic = 2;
		m_iProtected = 3;
	}
};

int main()
{
	Base cBase;
	cBase.m_iPublic = 1; // public members can be accessed out side the class.
	// cBase.m_iProtected = 4; // not allowed cannot access protected members from class.
	// cBase.m_iPrivate = 6; // not allowed cannot access private members outside from class.


    return 0;
}

