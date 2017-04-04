// Functions.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

// function decleartion 
int mult(int, int);

// function definitions
// function to add 2 numbers
int add(int x, int y)
{
	return x + y;
}

// function definitions
// function to find max 2 nos
int max(int x, int y)  // formal parameters
{
	if (x > y)
		return x;
	else
		return y;
}

// Pass By reference 
void fun(int *ptr)
{
	*ptr = 30;
}

int main()
{
	int num1(0), num2(0);
	cin >> num1 >> num2;
	auto sum = add(num1, num2);	// actual parameters
	cout << sum << endl;
	double b = add(1.1, 2.4);
	cout << b << endl;
	int max_num = max(num1, num2);
	cout << max_num << endl;
	int x = 20;
	fun(&x);
	cout << "Value after pass by reference " << x << endl;
	return 0;
}


