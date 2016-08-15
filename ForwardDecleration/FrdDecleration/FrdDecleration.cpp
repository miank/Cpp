// FrdDecleration.cpp : Forward decleration for functions.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Option 1
int add(int x, int y)
{
	return x + y;
}

int main()
{
	cout << "The addition of 3 and 4 is: " << add(3, 4) << endl;
    return 0;
}


