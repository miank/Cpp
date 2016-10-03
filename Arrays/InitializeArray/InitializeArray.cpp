// InitializeArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int month, days, total_days;
	int days_per_month[12] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cout << "Enter month ( 1 to 12): ";
	cin >> month;
	cout << "Enter day (1 - 31)";
	cin >> days;
	total_days = days;
	for (int j = 0; j < month - 1; j++)
	{
		total_days += days_per_month[j];
	}
	cout << "Total days from start of year is: " << total_days
		<< endl;
    return 0;
}

