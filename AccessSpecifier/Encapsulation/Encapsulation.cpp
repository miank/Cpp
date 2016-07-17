// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Something
{
	int m_iValue[3]; // Changed the implementation of class
public:
	// Member interface
	void setValue1(int value) { m_iValue[0] = value; }
	int getValue1() { return m_iValue[0]; }
};

int main()
{
	Something something;
	something.setValue1(2);
	cout << something.getValue1() << " \n";
    return 0;
}

