// CharArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch[20];
	ch[0] = 'j';
	ch[1] = 'o';
	ch[2] = 'h';
	ch[3] = 'n'; 
	ch[4] = '\0';
	int len = strlen(ch);
	cout << len << endl;
	cout << ch << endl;
	cout << sizeof(ch) << endl;

	char ch1[20] = "String Literal";
	int len1 = strlen(ch1);
	cout << len1 << endl;
	cout << sizeof(ch1) << endl;   
    return 0;
}

