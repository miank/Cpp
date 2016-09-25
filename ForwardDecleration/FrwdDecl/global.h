#pragma once
#include <iostream>
using namespace std;

extern int g_x; // forward decleration for g_x -- g_x can be used anywhere beyond this point
class Global {
	void Test() {
		extern int g_y; // forward decleration for g_y -- g_y can be used beyond this point in main()
		g_x = 5;
		cout << g_y; // should print 2
	}
};