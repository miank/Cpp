// Float.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	float f;
	f = 9.87654321f;
	std::cout << f << std::endl;
	f = 987.654321f;
	std::cout << f << std::endl;
	f = 987654.321f;
	std::cout << f << std::endl;
	f = 9876543.21f;
	std::cout << f << std::endl;
	f = 0.0000987654321f;
	std::cout << f << std::endl;

	std::cout << std::setprecision(16); // show 16 digits
	float f1 = 3.33333333333333333333333333333333333333f;
	std::cout << f1 << std::endl;
	double d1 = 3.3333333333333333333333333333333333333;
	std::cout << d1 << std::endl;

	float f3(123456789.0f); // f has 10 significant digits
	std::cout << std::setprecision(9); // to show 9 digits in f
	std::cout << f3 << std::endl;

	double d2(1.0);
	std::cout << d2 << std::endl;

	double d3(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // should equal 1.0
	std::cout << d3 << std::endl;

	double d4(0.1);
	std::cout << d4 << std::endl; // use default cout precision of 6
	std::cout << std::setprecision(17);
	std::cout << d4 << std::endl;
	return 0;
}

