// MultipleArguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class type>
int find(type *array, type value, int size) {
	for (int j = 0; j < size; j++) 
		if (array[j] == value) {
			return j;
		}
		return -1;
}

char chArray[] = { 1, 3, 5, 9, 11, 13 };
char ch = 5;
int intArray[] = { 1, 3, 5, 9, 11, 13 };
int in = 6;
long loArray[] = { 1, 3, 5, 9, 11, 13 };
long ll = 11L;
double dubArray[] = { 1, 3, 5, 9, 11, 13 };
double db = 4.0;

int main()
{
	cout << "\n 5 in chrArray: index = " << find(chArray, ch, 6);
	cout << "\n 4 in inArray: index = " << find(intArray, in, 6);
	cout << "\n 11 in lonArray: index = " << find(loArray, ll, 6);
	cout << "\n 4 in dubArray: index = " << find(dubArray, db, 6);
	cout << endl;
    return 0;
}

