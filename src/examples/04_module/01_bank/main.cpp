#include "checking_account.h" //has bankaccount included
#include<iostream>
#include<vector>

using std::cout; using std::cin;

int main()
{
	CheckingAccount checking;
	CheckingAccount checking1(90);

	

	/*BankAccount a;
	cout << a.get_balance();

	std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}*/

	BankAccount account(500);
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

	return 0;
}