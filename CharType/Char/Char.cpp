// Char.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1(97); // Initialize with integer 97
	char ch2('a'); // Initialize with integer 'a' 97
	char ch3(5); // Initialize with integer 5
	char ch4('5'); // Initialize with code point to 5
	cout << ch1 << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;
	cout << ch4 << endl;
	cout << 'b' << endl;
    return 0;
}

