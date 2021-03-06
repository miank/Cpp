// Deque.cpp 

#include "stdafx.h"
#include <iostream>
#include <deque>
using namespace std;

void showq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); it++)
	{
		cout << "\t" << *it << endl;
	}
}

int main()
{
	deque<int> dquiz;
	dquiz.push_back(10);
	dquiz.push_front(20);
	dquiz.push_back(30);
	dquiz.push_front(15);

	cout << "The deque is : ";
	showq(dquiz);

	cout << "deque size is " << dquiz.size() << endl;
	cout << "deque max size is " << dquiz.max_size() << endl;
	cout << "deque at(2) " << dquiz.at(2) << endl;
	cout << "deque front is " << dquiz.front() << endl;
	cout << "deque back is " << dquiz.back() << endl;
	cout << "deque pop_front is "; dquiz.pop_front();
	showq(dquiz);
	cout << "deque pop_back is "; dquiz.pop_back();
	showq(dquiz);


    return 0;
}

