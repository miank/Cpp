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
    return 0;
}

