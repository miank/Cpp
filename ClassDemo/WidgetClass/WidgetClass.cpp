// WidgetClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////

class Part {
private:
	int modelNumber;
	int partNumber;
	float cost;
public:
	void setPart(int mn, int pn, float c) // set data
	{
		modelNumber = mn;
		partNumber = pn;
		cost = c;
	}
	void showPart()
	{
		cout << "Model " << modelNumber << endl;
		cout << "Part " << partNumber << endl;
		cout << "cost " << cost << endl;
	}
};
int main()
{
	Part part1;
	part1.setPart(6244, 373, 217.55F);
	part1.showPart();
    return 0;
}

