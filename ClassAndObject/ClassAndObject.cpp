// ClassAndObject.cpp 

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
using namespace std;

int main()
{
	Person p1("Kate", "Gregory", 123);
	{
		//Person p2("Someone", "Else", 456);
		Tweeter t1("Someone", "Else", 456, "@whoever");
	}

	cout << "After innermost block " << endl;


    return 0;
}

