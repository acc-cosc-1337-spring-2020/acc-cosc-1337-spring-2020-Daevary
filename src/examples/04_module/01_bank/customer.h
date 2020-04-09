//customer.h

#ifndef CUSTOMER_H 
#define CUSTOMER_H
#include <iostream>
#include <memory>
#include <vector>
#include "bank_account.h"


class Customer
{
public:


	void add_account(std::unique_ptr<BankAccount>& act);
	friend std::ostream& operator<<(std::ostream& out, const Customer& c);

private:
	std::vector<std::unique_ptr<BankAccount>> accounts;
};

#endif // !CUSTOMER_H
