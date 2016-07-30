// PersonClass.cpp : Defines the entry point for the console application.
// Inheritance class

#include "stdafx.h"
#include <iostream>
#include <string>

class Person
{
public:
	std::string m_strName;
	int m_iAge;
	bool m_bIsMale;

	std::string GetName() { return m_strName; }
	int GetAge() { return m_iAge; }
	bool IsMale() { return m_bIsMale; }

	Person(std::string strName = "", int iAge = 0, bool IsMale = false) : m_strName(strName), m_iAge(iAge), m_bIsMale(IsMale)
	{
	}
};

// BaseballPlayer class
class BaseBallPlayer : public Person
{
public:
	double m_dBattingAverage;
	int m_iHomeRuns;
	BaseBallPlayer(double dBattingAverage = 0.0, int iHomeRuns = 0) : m_dBattingAverage(dBattingAverage), m_iHomeRuns(iHomeRuns) { }
};

int main()
{
	// Person Object 
	Person objPerson("John", 22, "True");
	BaseBallPlayer objBaseBall(33.00, 240);
	objBaseBall.m_strName = "Joee";
	std::cout << objBaseBall.GetName() << std::endl;
	return 0;
}

