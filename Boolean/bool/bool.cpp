// bool.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool isEqual(int x, int y) {
	return (x == y); // Operator == returns true if x equals y and false otherwise
}
int main()
{
	bool b1 = true; // Copy initialization
	bool b2(false); // direct initialization
	bool b3{ false }; // Uniform initialization
	bool b4 = !true; // b1 will have false
	bool b5(!false);
	cout << b1 << endl;
	cout << !b1 << endl;
	cout << b2 << endl;
	cout << !b2 << endl;
	
	bool b6(true);
	if (!b6)
	{
		cout << "hi ....." << endl;
	}
	else
	{
		cout << "hello ..... " << endl;
	}

	cout << "Enter an integer " << endl;
	int x;
	cin >> x;
	cout << "Enter another integer " << endl;
	int y;
	cin >> y;
	bool equal = isEqual(x, y);
	if (equal)
		cout << x << " and " << y << " are equal " << endl;
	else
		cout << x << " and " << y << " are not equal " << endl;
	return 0;
}

