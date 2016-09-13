// Overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void print(int i) {
	cout << "The value of int is " << i << endl;
}

void print(double f) {
	cout << "The value of double is " << f << endl;
}

void print(char* c) {
	cout << "The value of char is " << c << endl;
}
int main()
{
	print(10);
	print(10.10);
	print("ten");
    return 0;
}

