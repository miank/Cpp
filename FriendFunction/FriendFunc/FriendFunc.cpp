// FriendFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
private:
	int a = 10;
	int b = 20;
public:
	void show()
	{
		cout << a << " " << b << endl;
	}

	friend void display(Test);
};

void display(Test obj)
{
	// accessing the private members
	cout << obj.a << obj.b << endl;
}


int main()
{
	Test obj2;
	display(obj2);
	
    return 0;
}

