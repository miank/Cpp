#pragma once
#include <string>

class Transaction
{
	int amount;
	std::string type;
public:
	Transaction(int amt, std::string kind);
	std::string Report();
};

