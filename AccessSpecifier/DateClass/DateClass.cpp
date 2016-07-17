// DateClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class DateClass  // members are private by default
{
	int m_iMonth; // private by default , can only be accessed by other members
	int m_iDay; 
	int m_iYear;
public:
	void setDate(int iMonth, int iDay, int iYear)
	{
		m_iMonth = iMonth;
		m_iDay = iDay;
		m_iYear = iYear;
	}

	void print() // public can be accessed by anyone.
	{
		cout << m_iMonth << " /" << m_iDay << " /" << m_iYear << endl;
	}
};

int main()
{
	DateClass date;
	date.setDate(10, 14, 2020); // setDate() is public
	date.print();
    return 0;
}

