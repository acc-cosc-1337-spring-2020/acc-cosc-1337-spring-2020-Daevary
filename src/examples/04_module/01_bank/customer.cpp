#include "customer.h"

//customer.cpp

void Customer::add_account(std::unique_ptr<BankAccount> & act)
{
	accounts.push_back(std::move(act));
}

std::ostream & operator<<(std::ostream & out, const Customer & c)
{
	for (auto& account : c.accounts)
	{
		out << *account << "\n";
	}
	return out;
}
