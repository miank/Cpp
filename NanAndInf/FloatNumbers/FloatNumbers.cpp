// FloatNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double zero = 0.0;
	double posinf = 5.0 / zero; // postive infinity
	cout << posinf << endl;
	double neginf = -5.0 / zero; // negative infinity
	std::cout << neginf << "\n";
	double nan = zero / zero; // not a number (mathematically invalid)
	std::cout << nan << "\n";
    return 0;
}

