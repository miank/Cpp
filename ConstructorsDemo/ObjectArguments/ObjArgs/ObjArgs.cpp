// ObjArgs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Distance {
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) { }
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getDist() {
		cout << "Enter feet " << endl; cin >> feet;
		cout << "Enter inches " << endl; cin >> inches;
	}
	void showDist() {
		cout << feet << "\ '-" << inches << '\"';
	}
	void addDist(Distance, Distance);
};

void Distance::addDist(Distance d2, Distance d3) {
	inches = d2.inches + d3.inches;
	feet = 0;
	if (inches >= 12.0) {
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d3.feet;
}

int main()
{
	Distance dist1, dist3;
	Distance dist2(11, 6.25);
	dist1.getDist();
	dist3.addDist(dist1, dist2);

	cout << "dist1 = "; dist1.showDist();
	cout << "dist2 = "; dist2.showDist();
	cout << "dist3 = "; dist3.showDist();
    return 0;
}

