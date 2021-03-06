// OperatorOverloadAsNormalFunction.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Cents
{
	int m_cents;
public:
	Cents(int cents) :m_cents(cents) { }
	int getCents() const { return m_cents; }

	// Overloading using normal function
};
Cents operator+(Cents c1, Cents c2)
{
	return int(c1.getCents() + c2.getCents());
}
int main()
{
	Cents c1(4);
	Cents c2(4);
	Cents cSum = c1 + c2;
	cout << cSum.getCents() << endl;
    return 0;
}

