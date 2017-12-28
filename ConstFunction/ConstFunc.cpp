// ConstFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
	int value;
public:
	Test(int v = 0)
	{
		value = v;
	}

	// We get compiler error if we change the value of value.
	// When a function is declared as const, it can be called on any type of object.
	int getValue() const
	{
		//value = 100;
		return value;
	}

	int setValue(int a)
	{
		value = a;
	}
};

int main()
{
	const Test t(20);
	cout << t.getValue() << endl; 
	// t.setValue(40); // error since can't call non const function via const object.
    return 0;
}

