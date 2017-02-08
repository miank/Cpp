// Exception.cpp : Exception handing in cpp
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x = -1;
	// some code
	cout << "Before you try " << endl;
	try {
		cout << "Inside try " << endl;
		if (x < 0)
		{
			throw 10;
			cout << "After throw (Never executed)";
		}
	}
	catch (int ex)
	{
		cout << "Exception caught " << endl;
	}
	catch (...)
	{
		cout << "Default exception " << endl;
	}
	cout << "After catch will be executed " << endl;
    return 0;
}

