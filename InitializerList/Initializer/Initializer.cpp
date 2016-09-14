// Initializer.cpp : It is used to intialize data member of a class.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
	const int t;          // Const Variables
	int &t;
public:
	Point(int &t): t(t){}
	Point(int t): t(t){} // Initializer List must be used
	Point(int i = 0, int j = 0, int t = 0): x(i), y(j), t(0) { }
	/*  The above use of Initializer list is optional as the
	constructor can also be written as:
	Point(int i = 0, int j = 0) {
	x = i;
	y = j;
	}
	*/
	int getX() const { return x; }
	int getY() const { return y; }
	int getT() { return t; }
};

int main()
{
	Point p1(10, 15);
	cout << "x = " << p1.getX() << endl;
	cout << "y = " << p1.getY() << endl;
	cout << "t = " << p1.getT() << endl;
    return 0;
}

