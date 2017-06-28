#pragma once
#ifndef PERSON_H
#include <string>
using namespace std;

class Person
{
	int number;
	string FirstName;
	string LastName;
public:

	Person(string fName, string lName, int num);

	int GetNumber();

	int SetNumber(int num);

	string GetName();
};
#endif // !PERSON_H
