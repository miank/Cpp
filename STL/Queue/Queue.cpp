// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> q)
{
	queue<int> qt = q;
	while (!qt.empty())
	{
		cout << qt.front() << endl;
		qt.pop();
	}
}

int main()
{
	queue<int> queue;
	queue.push(11);
	queue.push(22);
	cout << "The queue is " << endl;
	showQueue(queue);
	cout << "Queue Size is " << queue.size() << endl;
	cout << "Queue Front is " << queue.front() << endl;
	cout << "Queue back is " << queue.back() << endl;
	cout << "Queue pop is "; queue.pop(); 
	cout << endl;
	showQueue(queue);
    return 0;
}

