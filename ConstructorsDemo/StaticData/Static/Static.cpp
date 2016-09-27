// Static.cpp : Static data
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Foo {
	static int count;
public:
	Foo() { count++; }
	int getCount() { return count; }
};

// ---------------------------------------------
int Foo::count = 0;

int main()
{
	Foo f1, f2, f3;
	cout << "Count is " << f1.getCount() << endl; // each object
	cout << "Count is " << f2.getCount() << endl; // each object
	cout << "Count is " << f3.getCount() << endl; // each object
    return 0;
}

