// HandlingException.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 10;

	try 
	{
		throw -1;
		try 
		{
			throw 4.5;
			cout << "This never prints " << endl;
		}	
		catch (double x)
		{
			cerr << "We got a double value " << x << endl;
		}
	}
	catch (int x)
	{
		cout << "We caught an int exception value " << x << endl;
	}
	catch (string x)
	{
		cout << "We caught an string exception value " << x << endl;
	}
    return 0;
}

