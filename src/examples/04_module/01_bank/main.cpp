#include "checking_account.h" //has bankaccount included
#include "savings_account.h"
#include "customer.h"
#include "atm.h"
#include<iostream>
#include<vector>
#include<memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{ 

	unique_ptr<BankAccount> s = make_unique<SavingsAccount> ( 90 ); // creates an instance of bankaccount
	unique_ptr<BankAccount> c = make_unique <CheckingAccount>( 100 );
	
	
	std::vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));

	Customer cust;
	cust.add_account(s);
	cust.add_account(c);

	ATM atm(cust);
	cout << atm;


	/*BankAccount a;
	cout << a.get_balance();

	std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) };*/

	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n"; //points to the instance savingsaccount of type bankaccount
	}


	/*
	cin >> account; 
	cout << account;
	display_balance(account);

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
	*/
	return 0;
}