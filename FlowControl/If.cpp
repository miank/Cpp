// FlowControl.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter two numbers " << endl;
	cin >> x >> y;

	cout << x << " ";
	if (x > y)
	{
		cout << "is larger than ";
	}
	else
	{
		cout << "is not larger than ";
	}
	cout << y << endl;

	if (x + y > 10)
		cout << "thanks for choosing large numbers!" << endl;

	////////////////// While Loop ////////////////////////
	int x1;
	cout << "Enter a number " << endl;
	cin >> x1;

	bool prime = true;
	int i = 2;

	while (i <= x1/i)
	{
		int factor = x1 / i;
		if (factor * i == x1)
		{
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
		i = i + 1;
	}
	cout << x1 << " is " ;
	if (prime)
		cout << "prime " << endl;
	else
		cout << "not prime " << endl;


    return 0;
}

