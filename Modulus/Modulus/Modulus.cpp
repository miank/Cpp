// Modulus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int count = 1; // start at 1
	while (count <= 100) {
		std::cout << count << " "; // print the number

		// if count is evenly divisible by 20, print a new line
		if (count % 20 == 0)
			std::cout << "\n";
		count = count + 1; // go to next number
	} // end of while
    return 0;
}

