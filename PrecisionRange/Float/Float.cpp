// Float.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

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
	return 0;
}

