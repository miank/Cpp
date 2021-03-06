// Vector_Clear_Erase.cpp

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// clear() function will erase all the elements from the vector container making it zero
	vector<int> vInt;
	vInt.push_back(1);
	vInt.push_back(2);
	vInt.push_back(3);
	vInt.push_back(4);
	vInt.push_back(5);
	vInt.push_back(6);
	// vector contains 1, 2, 3, 4, 5
	vInt.clear();

	// print the vector	  no output
	for (auto it = vInt.begin(); it != vInt.end(); ++it)
	{
		cout << *it << endl;
	}

	// erase function()
	vector<int> myVect{ 1, 2, 3, 4, 5 };
	vector<int>::iterator it;
	it = myVect.begin();
	myVect.erase(it);

	// printing the vector
	for (auto it = myVect.begin(); it != myVect.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;
	
	// Divisibility by 2 
	vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto i = myvector.begin(); i != myvector.end(); ++i)
	{
		if (*i % 2 == 0)
		{
			myvector.erase(i);
			i--;
		}
	}

	//Printing the vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;


    return 0;
}

