// GuessMyNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number = 8;
	int guess = 0;
	cout << "Enter the number " << endl;
	cin >> number;
	bool notguessed = true;
	while(notguessed)
	{
		cout << "Enter the guess number " << endl;
		cin >> guess;
		if (number > guess)
		{
			cout << "Number too far answer " << endl;
		}
		else if (number < guess)
		{
			cout << "Number too near answer " << endl;
		}
		else
		{
			if (number == guess)
			{
				cout << "Number equal too answer " << endl;
				notguessed = false;
			}
		}
	}
    return 0;
}

