// SmallObj.cpp : Demonstarates a small, simple object
//

#include "stdafx.h"
#include <iostream>

class SmallObj  // Define a class
{
	int m_iData;
public:
	void SetData(int d)  // member function to set data
	{
		m_iData = d;
	}

	void ShowData()  // member function to display data
	{
		std::cout << "Data is " << m_iData << std::endl;
	}
};
/////////////////////////////////////////////////////////
int main()
{
	SmallObj obj1, obj2;
	obj1.SetData(1066);
	obj2.SetData(1776);
	obj1.ShowData();
	obj2.ShowData();
    return 0;
}

