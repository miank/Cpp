// SumOfPrime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int iPrime[5];
	iPrime[0] = 2;
	iPrime[1] = 3;
	iPrime[2] = 5;
	iPrime[3] = 7;
	iPrime[4] = 11;

	cout << "The lowest prime number is:" << iPrime[0] << endl;
	cout << "The sum of the first 5 prime is: " << iPrime[0] + iPrime[1] + iPrime[2] + iPrime[3] + iPrime[4] << endl;

	return 0;
}

