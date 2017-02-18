// This.cpp : The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls 
// and is available as a local variable within the body of all nonstatic functions. 
// ‘this’ pointer is a constant pointer that holds the memory address of the current object. 
// ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
	int x;
public:
	void SetX(int x)
	{
		this->x = x;
	}
	void Print()
	{
		cout << "x = " << x << endl;
	}
};

int main()
{
	Test obj;
	int x = 20;
	obj.SetX(x);
	obj.Print();
    return 0;
}

