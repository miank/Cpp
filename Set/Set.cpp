// Set.cpp 

#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>
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

	// Search element in a set 
	set<int>::iterator i = s.find(2);
	if (i != s.end())
	{
		cout << " Element found " << endl;
	}
	else
	{
		cout << "Element not found " << endl;
	}
	// Set of Strings
	
	std::set<std::string> setOfStrs = { "Hi", "Hello", "is", "the", "at", "Hi", "is", "from", "that" };

	std::set<std::string>::iterator it = setOfStrs.begin();

	// Iterate over the set till end
	while (it != setOfStrs.end())
	{
		if (it->size() > 3)
		{
			// Remove string from set if length is greater than 3.
			it = setOfStrs.erase(it);
		}
		else
			it++;
	}
	for (set<string>::iterator it = setOfStrs.begin(); it != setOfStrs.end(); it++)
	{
		cout << (*it) << endl;
	}
	return 0;
}

