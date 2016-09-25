// Internal_External.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

static int g_x; // g_x static linkage can be used with in a files
extern double g_y(9.8); // g_y is external, and can be used by other files

int main()
{
    return 0;
}

