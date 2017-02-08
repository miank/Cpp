// NestedTryCatch.cpp : Nested try catch.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	try 
	{
		try
		{
			throw 20;
		}
		catch (int n)
		{
			cout << "Handled partially " << endl;
			throw;
		}
	}
	catch (int n)
	{
		cout << "Handled remaining " << endl;
	}
    return 0;
}

