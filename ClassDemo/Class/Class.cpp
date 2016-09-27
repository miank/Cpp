// Class.cpp : Simple object application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class SmallObj
{
private:
	int someData;
public:
	void SetData(int d)
	{
		someData = d;
	}
	void ShowData()
	{
		cout << "Data is " << someData << endl;
	}
};

int main()
{
	SmallObj s1, s2;
	s1.SetData(1066);
	s2.SetData(1776);
	s1.ShowData();  // call member function to display data
	s2.ShowData();
    return 0;
}

