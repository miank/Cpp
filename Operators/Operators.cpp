// Operators.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	cout << "i " << i << endl;
	i += 2;
	cout << "i " << i << endl;
	i *= 3;
	cout << "i " << i << endl;
	i -= 2;
	cout << "i " << i << endl;
	i /= 4;
	cout << "i " << i << endl;
	int j = i++;
	cout << "i " << i << ", j " << j << endl;
	j = i++;
	cout << "i " << i << ", j " << j << endl;
	j = i--;
	cout << "i " << i << ", j " << j << endl;
	j = --i;
	cout << "i " << i << ", j " << j << endl;

	

    return 0;
}

