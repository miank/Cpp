#pragma once
#include <string>

class Person
{
private:
	string firstName;
	string lastName;
	int arbitaryNumber;
public:
	Person(string fName, string lName, int arbitary);
	~Person();
};
