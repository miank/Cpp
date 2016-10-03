// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int age[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter age: ";
		cin >> age[i];
	}

	for (int j = 0; j < 4; j++)
	{
		cout << "You entered " << age[j] << endl;
	}

	cout << "------------------------------------------------" << endl;

	const int SIZE = 6;
	double sales[SIZE];

	cout << "Enter the widget sales for 6days" << endl;
	for (int j = 0; j < SIZE; j++) {
		cin >> sales[j];
	}

	double total = 0;
	for (int j = 0; j < SIZE; j++) {
		total = total + sales[j];
	}

	double average = total / SIZE;
	cout << "Average = " << average << endl;
    return 0;
}

