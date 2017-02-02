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
    return 0;
}

