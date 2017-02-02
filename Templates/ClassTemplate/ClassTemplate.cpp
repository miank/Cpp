// ClassTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename t>

class Array
{
	T *ptr;
	int size;
public:
	template <typename t>
	Array(T arr[], int s)
	{
		ptr = new T[s];
		size = s;
		for (int i = 0; i < size; i++)
		{
			ptr[i] = arr[i];
		}
	}
	template <typename T>
	void Array<T>::print() {
		for (int i = 0; i < size; i++)
			cout << " " << *(ptr + i);
		cout << endl;
	}
};
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5};
	Array<int> a(arr, 5);
	a.print();
    return 0;
}

