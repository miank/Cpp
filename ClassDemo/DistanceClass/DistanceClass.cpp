// DistanceClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Distance {
private:
	int feet;
	float inches;
public:
	void setDist(int ft, float in) {
		feet = ft;
		inches = in;
	}
	void getDist() {
		cout << "Enter feet : "; cin >> feet;
		cout << "Enter inches : "; cin >> inches;
	}
	void showDist() {
		cout << feet << " \ '-" << inches << '\"' << endl;
	}
};
int main()
{
	Distance d1, d2;
	d1.setDist(11, 6.25);
	d2.getDist();
	cout << "\n dist1 = "; d1.showDist();
	cout << "\n dist2 = "; d2.showDist();

    return 0;
}

