// NamespaceAndUsing.cpp 

#include "stdafx.h"
#include <iostream>

// directive:  to brining all namespace members into current scope.
using namespace std;

// decleration: using member from base class to current class scope.
using std::cout;

class B
{
public:
	void f(int a);
};

class D : private B
{
public:
	void g() {
		using namespace std; // case 1 local scope
		cout << "From D: \n";
	}

	void h()
	{
		using namespace std; // case 2.a local scope
		cout << "From D: \n";
	}

	using B::f; // case 2.b class scope
};

int main()
{
    return 0;
}

