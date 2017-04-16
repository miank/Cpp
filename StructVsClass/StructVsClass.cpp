// StructVsClass.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

// data conatiner and carry public data
struct Person_t
{
	// All data members are public
	string name;
	unsigned age = 20;
private:
	int height;
};

// carry private data and used for more complex data structure like member function

class Person
{
	// Data members can be public, private or protected
	// members are trailing with _
	string name_;
	unsigned age_ = 22;
public:
	int i;
	unsigned age() const // getter / accesser
	{
		return age_;
	}

	void set_age(unsigned a) //setter / mutator
	{
		age_ = a;
	}
};

int main()
{
	Person_t pt;
	cout << pt.age << endl;

	Person p;
	cout << p.age() << endl;
	p.set_age(24);
	cout << p.age() << endl;
    return 0;
}

