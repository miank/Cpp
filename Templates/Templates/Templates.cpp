// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

int main()
{
	cout << max(2, 4) << endl;
	cout << max('a', 'b') << endl;
	cout << max<int>(3, 8) << endl;
	cout << max<double>(3.5, 2.4) << endl;

    return 0;
}

