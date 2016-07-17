// Structs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct DateStruct
{
	int iYear;
	int iMonth;
	int iDay;
};

void Print(DateStruct &date)
{
	cout << date.iYear << " /" << date.iMonth << " /" << date.iDay << endl;
}

int main()
{
	DateStruct today{ 2016, 7, 16 };
	today.iDay = 15;
	Print(today);
    return 0;
}

