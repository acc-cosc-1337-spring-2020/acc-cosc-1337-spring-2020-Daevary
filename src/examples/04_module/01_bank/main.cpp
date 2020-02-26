#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "Balance is: " << balance;

	return 0;
}