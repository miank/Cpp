// OperatorOverload.cpp : Redefining the operator with your won need.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
private:
	int count;
public:
	Test() : count(5) {}
	void operator++()
	{
		count = count + 1;
	}
	void Display()
	{
		cout << "Count " << count << endl;
	}
};

int main()
{
	Test t;
	// This calls the function operator++
	++t;
	t.Display();
    return 0;
}

