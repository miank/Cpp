// OrderOfConstruction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
	int a_id;
public:					 	
	A()
	{
		cout << "A" << endl;
	}
	void getId() const { cout << a_id << endl; }
};

class B	: public A
{
public:
	int b_id;
	B()
	{
		cout << "B" << endl;
	}	
	void get_Id() const { cout << b_id << endl; }

};

class C : public B
{
public:
	int m_id;
	C()
	{
		cout << "C" << endl;
	}
};

class D : public C
{
public:
	int m_id;
	D()
	{
		cout << "D" << endl;
	}
};

int main()
{
	A a;
	B b;
	b.getId();
	b.
	C c;
	D d;
    return 0;
}

