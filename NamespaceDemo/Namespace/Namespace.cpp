// Namespace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace first
{
	int val = 50;
}

// Global Variable
int val = 100;




int main()
{
	int val = 200;
	cout << first::val << endl;
	return 0;
}

