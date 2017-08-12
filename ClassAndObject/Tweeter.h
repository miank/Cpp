#pragma once
#include "Person.h"
#include <string>

class Tweeter : public Person
{
	std::string twitterhandle;
public:
	Tweeter(std::string fName, std::string lName, int arbitary, std::string handle);
	~Tweeter();
};

