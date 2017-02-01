// FunctionOverload_Const.cpp 
// Based on pointers and references the function can be overloaded.

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun1(char *a) // this function can since pass by value
{
	cout << "non - const func() " << endl;
}

void fun1(const char *a)  // this function can change the value
{
	cout << "const func" << endl;
}

//int sum(int x, int a = 10)  // Based on default arguments the function can't be loaded.
//{
//	return a;
//}
//
//int sum(int y = 2,int a = 10)
//{
//	return a;
//}


int main()
{
	const char *c = "Geeks For Geeks";
	fun1(c);
    return 0;
}

