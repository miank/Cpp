// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void showStack(stack<int> st)
{
	stack<int> stk = st;
	while (!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}
}

int main()
{
	stack<int> st1;
	st1.push(11);
	st1.push(22);
	st1.push(33);
	st1.push(44);
	st1.push(55);
	st1.push(66);
	cout << "The stack is ";
	showStack(st1);
	cout << "Stack Size " << st1.size() << endl;
	cout << "Stack Top " << st1.top() << endl;
	cout << "Stack Pop "; st1.pop(); 
	cout << endl;
	showStack(st1);
    return 0;
}

