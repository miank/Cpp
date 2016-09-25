// GlobalVar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Variables declared outside of a block are global variables
int g_x; // global variables g_x
const int g_y(2); // global variables g_y

void doSomething() {
	g_x = 3;
	std::cout << g_y << "\n";
}

int main()
{
	g_x = 5;
	std::cout << g_y << endl;
	doSomething();
    return 0;
}

