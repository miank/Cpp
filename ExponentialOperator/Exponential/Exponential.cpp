// Exponential.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath> // need for pow()
#include <iostream>

int main()
{
	std::cout << "Enter the base: ";
	double base;
	std::cin >> base;

	std::cout << "Enter the exponent: ";
	int exp;
	std::cin >> exp;
	std::cout << base << "^" << exp << " = " << pow(base, exp) << std::endl;

    return 0;
}

