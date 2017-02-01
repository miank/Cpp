// FunctionOverload.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test
{
public:
	void print(int i)
	{
		cout << "Int : " << i << endl;
	}
	void print(double d)
	{
		cout << "Float : " << d << endl;
	}
	void print(char *c)
	{
		cout << "Char is char* " << c << endl;
	}
	void print(int a, int b)
	{
		cout << a << " " << b << endl;
	}
	//void print(const int a, const int b)   // Error because const dosent make much difference
	//{
	//	cout << a << " " << b << endl;
	//}
	//void print(int *a, int *b)		// conversion from int* to int not possible.
	//{
	//	cout << a << " " << b << endl;
	//}
};

int main()
{
	Test obj;
	obj.print("Hello World");
	obj.print(12.12);
	obj.print(22);
	obj.print(2, 4);
    return 0;
}

