#include "stdafx.h"
#include "Tweeter.h"
#include "Person.h"
#include <iostream>


Tweeter::Tweeter(std::string fName, std::string lName, int arbitary, std::string handle):
		Person(fName, lName, arbitary), twitterhandle(handle)
{
	std::cout << "Constructing tweeter " << twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
	std::cout << "Destructing tweeter " << twitterhandle << std::endl;
}
