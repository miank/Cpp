// PassingArraysToFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int PARA1 = 4;
const int PARA2 = 3;

void display(double[PARA1][PARA2]);

int main()
{
	double sales[PARA1][PARA2] = {
		{1, 2, 3},
		{5, 6, 7},
		{9, 10, 11},
		{12, 13, 14}
	};  // Initialize 2d array
	display(sales);
	return 0;
}

void display(double funsale[PARA1][PARA2]) {
	int d, m;
	cout << "\n\n";
	cout << "  Month\n";
	cout << "             1             2              3";
	for (d = 0; d < PARA1; d++) {
		cout << "District";
		for (m = 0; m < PARA2; m++) {
			cout << setiosflags(ios::fixed) << setw(10)
				<< setiosflags(ios::showpoint) << setprecision(2)
				<< funsale[d][m]; // array element
		}
	}
}
