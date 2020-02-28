#include "bank_account.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "Balance is: \n" << balance;
	

	auto amount{ 0 };
	cout << "\nEnter depost amount: \n";
	cin >> amount; 

	try
	{
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance();

	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}

	return 0;
}