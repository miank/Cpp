// AccessSpecifiers.cpp 

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Base
{
public:
	int m_b1;
private:
	int m_b2;
protected:
	int m_b3;
public:
	Base()
	{
		m_b1 = 10;
		m_b2 = 20;
		m_b3 = 30;
	}									 
};

class D1 : public Base
{
public:
	void ShowBase()
	{
		cout << "When base is derived publicly " << endl;
		cout << "Base memebers are public and protected will be available in derived class "<< m_b1 << m_b3 << " is accessible " << endl;
	}
};

class D2 : private Base
{
private:
	void ShowBase()
	{
		cout << "When base is derived privately " << endl;
		cout << "Base memebers are public and protected will be available in derived class " << m_b1 << m_b3 << " is accessible " << endl;
		m_b1;
	}
};		 

class D3 : protected Base
{
private:
	void ShowBase()
	{
		cout << "When base is derived protected " << endl;
		cout << "Base memebers are public and protected will be available in derived class " << m_b1 << m_b3 << " is accessible " << endl;
		
	}
};
int main()
{
	D2 d;
	D3 d3;
	
	
}