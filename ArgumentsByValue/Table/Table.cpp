// Table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void starline(); // function decleration

int main()
{
	starline();
	cout << "Data type range " << endl;
	starline();
	cout << "char        -128 to 127 " << endl;
	cout << "short        -32768 to 32767 " << endl;
	cout << "int          System Dependent " << endl;
	cout << "long -2, 147, 483, 648 to 2, 147, 483,647" << endl;
	starline();
    return 0;
}
// function definition 
void starline()  // function declerator
{
	for (int j = 0; j < 45; j++)
		cout << '*';
	cout << endl;
}
