// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}
}

int main()
{
	int a[10] = { 1, 5, 10, 9, 6, 7, 3, 4, 2, 6 };
	cout << "\n The array before sorting is : ";
	show(a);
	sort(a, a + 10);
	cout << "\n The array after sorting is : ";
	show(a);
    return 0;
}

