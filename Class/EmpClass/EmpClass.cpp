// EmpClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	string m_sName;
	int m_iId;
	double  m_dWage;

	// Print the employee information to screen
	void print()
	{
		cout << "Name : " << m_sName << "Id : " << m_iId << "Wage : $" << m_dWage << "\n";
	}
};

int main()
{
	// Delcare two  employees
	Employee alex{ "Alex ", 1, 25.00 };
	Employee joe{ "Joe ", 2, 22.56 };
	alex.print();
	joe.print();
    return 0;
}

