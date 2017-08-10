#pragma once
#include <string>

class Transaction
{
private:
	int amount;
	std::string type;
public:
	Transaction(int amt, std::string kind);
	std::string Report() const;
	void DoubleAmount() { amount *= 2; }
	~Transaction();
};

