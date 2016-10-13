// Strings.cpp : All string operations in C++
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello World " << endl;
	string myName("Alex");

	myName = "John";
	string myId("45");

	cout << "My Name is " << myName << endl;
	cout << "----------------------------------" << endl;

	cout << "Enter your full name " << endl;
	string fullName;
	getline(cin, fullName);

	cout << "Enter your age " << endl;
	string age;
	getline(cin, age);

	cout << "Your name is " << fullName << " and age is " << age << endl;

	cout << "----------------------------------" << endl;
	cout << "Append Strings" << endl;

	string a("47");
	string b("22");
	string sum("");

	cout << "The sum of a and b is " << a + b << endl;

	cout << "----------------------------------" << endl;
	cout << "String Length " << endl;

	cout << "The length of fullname is " << fullName.length();

    return 0;
}

