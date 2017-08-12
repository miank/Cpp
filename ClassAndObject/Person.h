#pragma once
#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;
	int arbitaryNumber;

public:
	Person(std::string fName, std::string lName, int arbitary);
	~Person();
};
