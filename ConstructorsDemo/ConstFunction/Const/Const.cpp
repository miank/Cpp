// Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Test {
	int alpha;
public:
	void nonFunc() {
		alpha = 99;
	}
	void conFunc() const {
	//	alpha = 99;  // ERROR
	}
};

int main()
{
    return 0;
}

