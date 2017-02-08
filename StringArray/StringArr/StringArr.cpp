// StringArr.cpp : String arrays.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	// initialize 2d array size is 4 and length of string is 10
	char color[4][10] = { "red", "yellow", "green", "blue" };
	for (int i = 0; i < 4; i++)
	{
		cout << color[i] << endl;
	}

	string color1[4] = { "red", "blue", "green", "yellow" };
	for (int i = 0; i < 4; i++)
	{
		cout << color1[i] << endl;
	}

	vector<string> color2;
	color2.push_back("red");
	color2.push_back("blue");
	color2.push_back("green");
	color2.push_back("yellow");

	for (int i = 0; i < color2.size(); i++)
	{
		cout << color[i] << endl;
	}

    return 0;
}

