// FunctionPointer.cpp 

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void Print()
{
	cout << "Hello" << endl;
}

void PrintHello(string name)
{
	cout << "Hello " + name << endl;
}					 

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	// creating function pointer 
	int (*p)(int, int);
	void (*ptr)();
	void (*ptr1)(string);
	int c(0);
	p = Add;
	c = (*p)(4,2);
	cout << c << endl;
	// Assign the address of function
	ptr = Print;
	ptr();
	ptr1 = PrintHello;
	ptr1("Tom");
    return 0;
}

