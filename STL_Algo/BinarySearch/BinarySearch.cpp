// BinarySearch.cpp : 
// prototype - binary_search(start addr, end addr, value t find)


#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int arraysize)
{
	for (int i = 0; i < arraysize; ++i)
		cout << '\t' << a[i];
	cout << endl;
}

int main()
{
	int a[] = { 1, 4, 11, 3, 2, 62, 8, 22, 31, 4 };
	int size = sizeof(a) / sizeof(int);
	int ele;
	cout << "The array is " << endl;
	show(a, size);
	cout << "Enter the element to search in the array " << endl;
	cin >> ele;
	cout << "First sort the array : " << endl;
	sort(a, a + 10);
	cout << "The array after sorting is : " << endl;
	show(a, size);
	cout << "Binary search " << endl;
	if (binary_search(a, a + 10, ele))
		cout << "Element found in the array " << endl;
	else
		cout << "Element not found in the array " << endl;

    return 0;
}

