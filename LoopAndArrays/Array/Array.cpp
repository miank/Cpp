// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int arrScores[]{ 84, 92, 76, 81, 56 };
	const int iNumStudent = sizeof(arrScores) / sizeof(arrScores[0]);
	int iTotalScore(0);

	// Use a loop to calculate totalscore
	for (int iStudent(0); iStudent < iNumStudent; ++iStudent)
	{
		iTotalScore = iTotalScore + arrScores[iStudent];
	}
	double dAverageScore = static_cast<double>(iTotalScore) / iNumStudent;

	int iMaxScore(0);
	for (int iIndex(0); iIndex < iNumStudent; ++iIndex)
	{
		if (arrScores[iIndex] > iMaxScore)
		{
			iMaxScore = arrScores[iIndex];
		}
	}

	cout << "The best score was " << iMaxScore << endl;
	return 0;
}

