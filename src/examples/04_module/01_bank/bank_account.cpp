#include "bank_account.h"



void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw Invalid("AMOUNT MUST BE GREATER THAN 0! ");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0 )
	{
		throw Invalid("AMOUNT MUST BE GREATER THAN 0! ");
	}
	else if (amount > balance)
	{
		throw Invalid("Insufficient Funds! ");
	}
	else
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (amount < min_balance_to_open)
	{
		throw Invalid("Amount must be greater than 25..."); 
	}
	
	balance += amount; 
}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	std::cout << "Balance is: " << b.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance is: " << b.balance << "\n";

	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount;
	std::cout << "Enter Amount: ";
	in >> amount;
	b.deposit(amount); // amount meets rules to add money into account

	return in; //treat in like cin
}
