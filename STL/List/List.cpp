// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

// function for printing the list
void showlist(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); it++)
	{
		cout << "\t " << *it;
	}
	cout << endl;
}


int main()
{
	list<int> list1, list2;
	for (int i = 0; i < 10; i++)
	{
		list1.push_back(i * 2);
		list2.push_front(i * 3);
	}
	cout << "List1 is : " << endl;
	showlist(list1);
	cout << "List2 is : " << endl;
	showlist(list2);

	cout << "List front " << list1.front() << endl;
	cout << "List end " << list1.back() << endl;
	cout << "List1 Pop front ";
	list1.pop_front();
	showlist(list1);
	cout << "List2 Pop front ";
	list2.pop_front();
	showlist(list2);
	cout << "Reverse the list " << endl;
	list1.reverse();
	list2.reverse();
	showlist(list1);
	showlist(list2);
	cout << "Sort the list " << endl;
	list1.sort();
	list2.sort();
	showlist(list1);
	showlist(list2);
	cout << endl;
	cout << "List is similar to doubly linked list where data can be inserted either front or back ";
	cout << endl;
	list<int> objlist;
	objlist.push_back(4);
	objlist.push_back(3);
	objlist.push_back(2);
	objlist.push_back(1);

	list<int>::iterator it = objlist.begin();
	while (it != objlist.end())
	{
		cout << *it << endl;
		it++;
	}
	cout << endl;
	cout << "No random access of elements is possible in list because of non contiguos vectors ";

    return 0;
}

