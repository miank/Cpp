// Variable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// defining a variable of specific type
	char chValue;
	bool bValue;
	int nValue;
	float fValue;
	double dValue;

	// void can't be used a type
	// void vValue;
	
	// Two ways to initialize a variable
	// Copy Initialization by using equal sign
	int iValue = 5;  // Copy Value

	// direct initialization 
	int iValue1(5);

	// Uniform Initialization
	int iValue{ 5 };

	// As per C++ new form of initialization that works for everything 
	// Uniform Initialization
	int iValue2{ 5 };

	int iValue{}; // default initialization set to 0

	// Variable assignment
	int iValue;
	iValue = 5; // Copy initialization

	// Defining multiple variables
	int a, b;



    return 0;
}

