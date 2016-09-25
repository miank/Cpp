// Static.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void IncrementAndPrint() {
	using namespace std;
	static int s_value = 1; // static duration via static keyword. This line is executed only once
	++s_value;
	cout << s_value << endl;
}

int main()
{
	IncrementAndPrint();
	IncrementAndPrint();
	IncrementAndPrint();
    return 0;
}

