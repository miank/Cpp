// Maps.cpp 

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	map<int, string> customer;
	// Creating Associative Array
	// Index of int type and value as string type
	customer[100] = "Gajendra";
	customer[123] = "Dilip";
	customer[145] = "Aditya";
	customer[171] = "Shahid";
	customer[200] = "Rajesh";

	map<int, string> c{	{100, "Gajendra"},	{123, "Dilip"}, {145, "Adity"}	
	};

	// To print
	cout << customer[100] << endl;

	map<int, string>::iterator p = customer.begin();
	while (p != customer.end())
	{
		cout << p->first << "-> " << p->second << endl;
		p++;
	}
	// Using at
	cout << "Using at() function " << customer.at(145) << endl;
	cout << "Size  " << customer.size() << endl;
	cout << "Empty check " << customer.empty() << endl;
	customer.insert(std::pair<int, string>(101, "Hello"));
	
	p = customer.begin();
	while (p != customer.end())
	{
		cout << p->first << "-> " << p->second << endl;
		p++;
	}
	return 0;
}

