// Even.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isEven(int x) {
	return (x % 2) == 0;
}

int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;
	if (isEven(x))
		std::cout << x << " is even \n";
	else
		std::cout << x << " is odd \n";
    return 0;
}

