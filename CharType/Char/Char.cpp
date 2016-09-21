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
	
	// Type cast
	char ch5(97);
	cout << ch5 << endl;
	cout << static_cast<int>(ch5) << endl;
	cout << ch5 << endl;

	// Inputting char 
	cout << "Input a keyboard character " << endl;
	char ch6;
	cin >> ch6;
	cout << ch6 << " has ASCII code " << static_cast<int>(ch6) << endl;

	// Input stored in buffer
	cout << "Input a keyboard character " << endl;
	char ch7;
	cin >> ch7; // ch ='a', "bcd" is left in queue
	cout << ch7 << " has ASCII code " << static_cast<int>(ch7) << endl;
	cin >> ch7; // ch = 'b' , "cd is left in queue"
	cout << ch7 << " " << static_cast<int>(ch7) << endl;
    return 0;
}

