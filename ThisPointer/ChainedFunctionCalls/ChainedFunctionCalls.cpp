// ChainedFunctionCalls.cpp : When a reference to a local object is returned,
// the returned reference can be used to chain function calls on a single object.

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
	int x;
	int y;
public:
	Test(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}

	Test setX(int a)
	{
		x = a;
		return *this;
	}

	Test setY(int b)
	{
		y = b;
		return *this;
	}

	void Print()
	{
		cout << "x = " << x << " y = " << y << endl;
	}
};

int main()
{
	Test obj(10, 15);
	obj.setX(10).setY(15);
	obj.Print();
    return 0;
}

