// Small.cpp 
// Variables and Expression have types

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello!";
	cout << endl;
	std::cout << 2 + 2 << endl;
	// Local Variables
	int i(4.9);
	cout << i << endl;
	auto j = 5;
	cout << j << endl;
	cout << "Float numbers " << endl;
	auto f = 4.9;  
	j = f;
	cout << f << endl;
	// EVerything participating	in expression is integer is an integer
	f = 9.0 / 5;
	cout << f << endl;
	

    return 0;
}											    

