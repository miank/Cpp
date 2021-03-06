// List.cpp 

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

void showList(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); it++)
	{
		cout << "\t" << *it << endl;
	}
}

int main()
{
	list<int> glist1, glist2;
	for (int i = 0; i < 10; i++)
	{
		glist1.push_back(i * 2);
		glist2.push_back(i * 3);
	}

	cout << "List1 is :";
	showList(glist1);
	cout << "List2 is :";
	showList(glist2);

	cout << "glist1.front() : " << glist1.front() << endl;
	cout << "glist1.back() : " << glist1.back() << endl;

	cout << "glist1.pop_front() :";
	glist1.pop_front();
	showList(glist1);

	cout << "\ngqlist2.pop_back() : ";
	glist2.pop_back();
	showList(glist2);

	cout << "glist1.reverse() : ";
	glist1.reverse();
	showList(glist1);

	cout << "glist2.reverse() : ";
	glist2.reverse();
	showList(glist2);
	
    return 0;
}

