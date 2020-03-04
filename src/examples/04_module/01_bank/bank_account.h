//bank_account.h
#include <string>

class BankAccount
{

public: 
	BankAccount() = default; //default constructor, if constructor is nt provided, c++ creates a synthesized default constructor. 
	explicit BankAccount(int b) : balance { b } {	} //constructor--> explicit : explicitly call it
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);

private:
	int balance{ 0 };
	const int min_balance_to_open{ 25 };  // cannot be changed

};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error() const { return message; }

private:
	std::string message;
};