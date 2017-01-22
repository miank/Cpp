// Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include <algorithm>
using namespace std;

void show(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t ";
	}
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Array before sorting " << endl;
	show(a);
	sort(a, a + 10);
	cout << "Array after sorting " << endl;
	show(a);
    return 0;
}

