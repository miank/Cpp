// CeilAndFloor.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// floor returns the smallest or equal to x (nearest integer)
	cout << "Floor is :" << floor(2.3) << endl;
	cout << "Floor is :" << floor(-2.3) << endl;
	// ceil returns the greatest or equal to x
	cout << "ceil is :" << ceil(2.3) << endl;
	cout << "ceil is :" << ceil(2.9) << endl;
	cout << "ceil is :" << ceil(-2.4) << endl;
    return 0;
}

