// Functions.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int num1(0), num2(0);
	cin >> num1 >> num2;
	auto sum = add(num1, num2);
	cout << sum << endl;
	double b = add(1.1, 2.4);
	cout << b << endl;
    return 0;
}

