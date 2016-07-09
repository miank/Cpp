// CppString.cpp : Strings in C++
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strName("Alex");
	// String can hold numbers as well
	string strNum("42");
	cout << "My Name is: " << strName << endl;
	// cin break on white space while taking the input so use getline

	string strFullName;
	string strAge;
	cout << "Enter your full name" << endl;
	getline(cin, strFullName);
	cout << "Enter your age " << endl;
	getline(cin, strAge);

	cout << "Your name is " << strFullName << " and age is " << strAge << endl;

	// Avoiding the "\n" to get captured by string in C++

	int iChoice;
	string strName1;

	cout << "Pick one choice " << endl;
	cin >> iChoice;
	cin.ignore(32767, '\n');
	cout << "Enter your name: ";
	getline(cin, strName1);

	cout << "Hello, " << strName << ", you picked" << iChoice << '\n';

	// Strings append
	string a("11");
	string b("22");

	cout << a + b << "\n ";  // a and b will be appended not added
	a += " volts";
	cout << a;

	// String length
	string myName2("Alex");
	cout << myName2 << " has " << myName2.length() << " Characters \n";

	return 0;
}

