#pragma once
#include <string>
using namespace std;

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
