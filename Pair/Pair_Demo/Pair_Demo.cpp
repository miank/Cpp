// Pair_Demo.cpp 

#include "stdafx.h"
#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
	pair<int, char> pair1;
	pair1.first = 100;
	pair1.second = 'G';
	cout << pair1.first << " ";
	cout << pair1.second << endl;

	// Different ways to initialize pair
	
	pair<int, char> p1(1, 'a');
	pair<int, char> p2(2, 'b');
	pair<int, char> p3(p2);

	p3 = make_pair(1, 'c');

	pair<string, double> pair02("GeeksforGeeks", 1.23);
	cout << pair02.first << " ";
	cout << pair02.second << endl;

	// make_pair() function
	pair<int, char> pair01;
	pair<string, double> pair2("GeeksforGeeks", 1.23);
	pair<string, double> pair3;

	pair01.first = 100;
	pair01.second = 'G';

	pair3 = make_pair("GeeksforGeeks is the best", 4.56);

	cout << pair1.first << " ";
	cout << pair1.second << endl;
	cout << pair2.first << " ";
	cout << pair2.second << endl;
	cout << pair3.first << " ";
	cout << pair3.second << endl;

	// Operators

	pair<int, int> pair03 = make_pair(1, 12);
	pair<int, int> pair04 = make_pair(9, 12);

	cout << (pair03 == pair04) << endl;
	cout << (pair03 != pair04) << endl;
	cout << (pair03 >= pair04) << endl;
	cout << (pair03 <= pair04) << endl;
	cout << (pair03 > pair04) << endl;
	cout << (pair03 < pair04) << endl;

	// Swap - Swap one pair object with contents of another pair
	// swap pair1.first with pair2.second with pair1.second with pair2.second

	pair<char, int>pair05 = make_pair('A', 1);
	pair<char, int>pair06 = make_pair('B', 2);

	cout << "Before swapping:\n ";
	cout << "Contents of pair1 = " << pair05.first << " " << pair05.second;
	cout << "Contents of pair2 = " << pair06.first << " " << pair06.second;
	pair05.swap(pair06);

	cout << "\nAfter swapping:\n ";
	cout << "Contents of pair1 = " << pair05.first << " " << pair05.second;
	cout << "Contents of pair2 = " << pair06.first << " " << pair06.second;

    return 0;
}

