// Vectors.cpp : Vector is a template based container that behaves just like a Dynamic Array.
// It can expands its memory at run time and always store elements in contiguous memory location 
// just like Array. We can store any type of element in vector by specifying the type as template argument.
// Performance:
// It Performs better if insertion and deletion is in end only and gives worst performance if insertion / deletion is at middle or at starting of vector.

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int>::iterator i;
	vector<int>::reverse_iterator ri;

	for (int i = 0; i != 5; i++)
	{
		v1.push_back(i); 
	}
	for (i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;
	cout << "Reverse " << endl;
	for (ri = v1.rbegin(); ri != v1.rend(); ri++)
	{
		cout << *ri << "\t";
	}
	cout << endl;
	cout << "Size " << v1.size() << endl;
	cout << "Max Size " << v1.max_size() << endl;
	cout << "Capacity " << v1.capacity() << endl;

	cout << "Accessing elements " << endl;
	vector<int> v2;
	vector<int>::iterator vi;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i * 10);
	}
	for (vi = v2.begin(); vi < v2.end(); vi++)
	{
		cout << *vi << "\t ";
	} 
	cout << endl;
	cout << "Reference Operator v2[2] " << v2[2] << endl;
	cout << "At v2.at(2) " << v2.at(2) << endl;
	cout << "Front " << v2.front() << endl;
	cout << "Back " << v2.back() << endl;
	





	return 0;
}

