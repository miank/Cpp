// FlowOfControl.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i(0);
	int j(0);
	bool keepgoing = true;
	int answer = 0; // Copy initialization
	for (int loop = 0; loop < 10; loop++)
	{
		cout << loop << endl;
	}
	while (keepgoing == true)
	{
		cout << "Enter a number " << endl;
		cin >> i;
		cout << "You entered " << i << endl << "Enter second number ";
		cin >> j;

		if (i < j)
		{
			cout << "First number, " << i << " , is lesser than second number " << endl;
		}
		else
		{
			cout << "Second number, " << j << " , is lesser than first number" << endl;
		}
		cout << "Compare another no? 0 for no " << endl;
		cin >> answer;

		if (answer == 0)
		{
			keepgoing = false;
		}
	}
    return 0;
}

