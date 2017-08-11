#include "stdafx.h" // It should be first
#include "Person.h"

Person::Person(std::string fName, std::string lName, int arbitary)
	: firstName(fName), lastName(lName), arbitaryNumber(arbitary)
{
}