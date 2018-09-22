// Overloading++.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Overload
{
	int count;
public:
	Overload():count(4){ }

	void operator++()
	{
		count++;
	}
	void Display()
	{
		cout << "Count : " << count << endl;
	}										
};											

int main()
{
	Overload obj;
	++obj;
	obj.Display();
    return 0;
}

