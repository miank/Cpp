// GlobalVar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Variables declared outside of a block are global variables
int g_x; // global variables g_x
const int g_y(2); // global variables g_y

int g_value(6); // global variable

void doSomething() {
	g_x = 3;
	std::cout << g_y << "\n";
}

int main()
{
	g_x = 5;
	std::cout << g_y << endl;
	doSomething();

	cout << "-------------------------------------" << endl;
	int value = 7; // hides the local variable
	value++; // increments the local variable
	::g_value--; // decrements the global value, not local value
	cout << "global value " << ::g_value << endl;
	cout << "local value " << value << endl;
    return 0;
}


