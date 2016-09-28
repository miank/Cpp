// Objects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Distance {
	int feet;
	int inches;
public:
	Distance(int ft, float in): feet(ft), inches(in) { }
	void getDist() {
		cout << "Enter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	void showDist() const {
		cout << feet << "\'-" << inches << "\'-";
	}
};

int main()
{
	const Distance football(300, 0);
	// football.getDist();  // can't call non const function with const object
	cout << "football = ";
	football.showDist();
	cout << endl;
    return 0;
}

