#pragma once
#include <string>
using namespace std;

#ifndef _PERSON_H
#define _PERSON_H
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

#endif // !_PERSON_H