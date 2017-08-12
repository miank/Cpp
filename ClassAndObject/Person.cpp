#include "stdafx.h" // It should be first
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(std::string fName, std::string lName, int arbitary) : 
		firstName(fName), lastName(lName), arbitaryNumber(arbitary)
{
	cout << "Constructing " << firstName << "  " << lastName << endl;
}

Person::~Person()
{
	cout << "Destructing " << firstName << "  " << lastName << endl;
}