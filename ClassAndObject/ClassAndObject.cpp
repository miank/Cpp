// ClassAndObject.cpp 

#include "stdafx.h"
#include <iostream>
#include "Tweeter.h"
#include "Status.h"
using std::cout;
using std::endl;

int main()
{
	Person p1("Kate", "Gregory", 123);
	{
		//Person p2("Someone", "Else", 456);
		Tweeter t1("Someone", "Else", 456, "@whoever");
	}

	cout << "After innermost block " << endl;
	Status s = Pending;
	s = Approved;



    return 0;
}

