// Vector_Copy.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec1{ 1, 2, 3, 4 };
	vector<int> vec2;

	for (int i = 0; i < vec1.size(); i++)
	{
		vec2.push_back(vec1[i]);
	}

	cout << "Old vector elements are " << endl;
	for (int i = 0; i<vec1.size(); i++)
		cout << vec1[i] << " ";
	cout << endl;

	cout << "New vector elements are : ";
	for (int i = 0; i<vec2.size(); i++)
		cout << vec2[i] << " ";
	cout << endl;

	// chnaging the value
	vec1[0] = 2;

	cout << "The first element of old vector is :";
	cout << vec1[0] << endl;
	cout << "The first element of new vector is :";
	cout << vec2[0] << endl;



    return 0;
}

