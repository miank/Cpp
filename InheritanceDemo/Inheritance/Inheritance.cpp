// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base
{
	int a;
	string str;
public:
	void Test() 
	{
		cout << "Base :: Test " << endl;
	}
protected:
	void Test2()
	{
		cout << "Base :: Test 2 " << endl;
	}
};

class Derived : public Base
{
	int b;
	string str2;
public:
	void Test3()
	{
		cout << "Derived :: Test3" << endl;
	}

	void Test4()
	{
		cout << "Derived :: Test4" << endl;
	}
};

int main()
{
	Derived obj;
    return 0;
}

