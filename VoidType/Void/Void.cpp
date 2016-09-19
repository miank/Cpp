// Void.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// void is a data type but has no type
// No variable with type void can be created
int main()
{
	//void a; // ERROR
		
    return 0;
}

// function return type can be void

void writeValue(int x)
{
	cout << "The value of x is " << endl;
	// no return type since type is void.
}

void Test(void) {
	// No arguments can be denoted as void
}

void Test1() {
	// Empty function paramters is an implicit void.
}