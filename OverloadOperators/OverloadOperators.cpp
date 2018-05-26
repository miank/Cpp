// OverloadOperators.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Cents
{
	int m_cents;
public:
	Cents(int cents):m_cents(cents){ }
	int getCents() const { return m_cents; }
	friend Cents operator+(Cents &obj1, Cents &obj2);
	friend Cents operator-(Cents &c1, Cents &c2);
};

int main()
{
	Cents cent1(8);
	Cents cent2(6);
	Cents centSum = cent1 + cent2;
	cout << "Cent Sum = " << centSum.getCents()  << endl;
	Cents centSub = cent1 - cent2;
	cout << "Cent Sub = " << centSub.getCents() << endl;
	return 0;
}

Cents operator+(Cents & obj1, Cents & obj2)
{
	return Cents(obj1.m_cents + obj2.m_cents);
}

Cents operator-(Cents & c1, Cents & c2)
{
	return Cents(c1.m_cents - c2.m_cents);
}
