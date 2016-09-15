// Destructor.cpp : It is called when object goes out of scope.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class String
{
	char *s;
	int size;
public:
	String(char *s); // constructor
	~String(); // constructor
};

String::String(char *c)
{
	size = strlen(c);
	s = new char[size + 1];
	strcpy(s, c);
}

String::~String()
{
	delete[]s;
}

int main()
{
    return 0;
}

