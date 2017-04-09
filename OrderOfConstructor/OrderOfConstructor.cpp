// OrderOfConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	int m_id;

	Base(int id = 0) : m_id(id) { cout << "Base \n"; }

	int getId() const { return m_id; }
};

class Derived
{
public:
	double m_cost;

	Derived(double cost = 0) : m_cost(cost) { cout << "Derived \n"; }
	
	int getCost() const { return m_cost; }
};

int main()
{
	cout << "Intiatiating base " << endl;
	Base cBase;

	cout << "Intiating Derived " << endl;
	Derived cDerived;

    return 0;
}

