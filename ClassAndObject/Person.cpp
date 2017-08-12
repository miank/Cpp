#include "stdafx.h" // It should be first
#include "Person.h"
#include <iostream>
Person::Person(std::string fName, std::string lName, int arbitary)
	: firstName(fName), lastName(lName), arbitaryNumber(arbitary)
{
	std::cout << "Constructing " << firstName << "  " << lastName << std::endl;
}

Person::~Person()
{
	std::cout << "Destructing " << firstName << "  " << lastName << std::endl;
}