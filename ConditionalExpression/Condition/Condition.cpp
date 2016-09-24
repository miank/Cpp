// Condition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool inBigClassRoom = false;
	const int classSize = inBigClassRoom ? 30 : 20;
	cout << classSize << endl;
    return 0;
}

