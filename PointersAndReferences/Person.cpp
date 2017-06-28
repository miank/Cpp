#include "stdafx.h"
#include "Person.h"

using namespace std;

Person::Person(string fName, string lName, int num)
{
	FirstName = fName;
	LastName = lName;
	number = num;
}

int Person::GetNumber()
{
	return number;
}

int Person::SetNumber(int num)
{
	number = num;
	return number;
}

string Person::GetName()
{
	return FirstName + LastName;
}