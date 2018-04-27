// Set.cpp 

#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(6);

	cout << "Set size " << s.size() << endl;
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}

    return 0;
}

