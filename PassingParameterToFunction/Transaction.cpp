#include "stdafx.h"
#include "Transaction.h"
using namespace std;

Transaction::Transaction(int amt, string kind) : amount(amt), type(kind)
{
}

string Transaction::Report() const
{
	string report;
	report += "  ";
	report += type;
	report += "  ";
	report += to_string(amount);
	return report;
}

Transaction::~Transaction()
{
}
