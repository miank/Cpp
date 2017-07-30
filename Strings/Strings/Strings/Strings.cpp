// Strings.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Who are you ?";
	cin >> name;
	cout << endl;

	string greeting = "Hello, " + name;

	if (name == "Kate")
	{
		greeting += ", I know you!";
	}

	cout << greeting << endl;
    return 0;
}

