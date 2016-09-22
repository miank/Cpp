// Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Comst is useful in function
void printInteger(const int myValue){
	cout << myValue << endl;
}

int main()
{
	const int x{ 4 };
	// x = 5; // ERROR
	const double gravity{ 9.8 }; // Add const before type

	cout << "Enter your age " << endl;
	int age;
	cin >> age;
	const int usersAge(age);

	constexpr double gravity(9.8); //resolved at compile time
	constexpr int sum = 4 + 7; // resolved at compile time

    return 0;
}

