// RelationOpr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;
	cout << "Enter another integer: ";
	int y;
	cin >> y;
	if (x == y)
		cout << x << " equals " << y << "\n";
	if (x != y)
		cout << x << " does not equal " << y << "\n";
	if (x > y)
		cout << x << " is greater than " << y << "\n";
	if (x < y)
		cout << x << " is lesser than " << y << "\n";
	if (x >= y)
		cout << x << " is greater than or equal to " << y << "\n";
	if (x <= y)
		cout << x << " is lesser than or equal to " << y << "\n";
    return 0;
}

