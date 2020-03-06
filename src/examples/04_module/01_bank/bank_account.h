//bank_account.h
#include <string>
#include <iostream>

class BankAccount
{

public: 
	BankAccount() = default; //default constructor, if constructor is nt provided, c++ creates a synthesized default constructor. 
	explicit BankAccount(int b) : balance { b } {	} //constructor--> explicit : explicitly call it
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b); // display balance is NOT a part of the class, FRIEND has access to the private FRIEND is a FREE function
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b); // ostream = cout NAMED out BankAccount named b, std::ostream& out is not needed as parameter
	// required to use cout w/ a class
	friend std::istream& operator >> (std::istream& in, BankAccount& b); // istream = cin NAMED in 

private:
	int balance{ 0 };
	const int min_balance_to_open{ 25 };  // cannot be changed
	static double rate; // creating static variable 
	static double init_rate() { return .025; } // function 
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error() const { return message; }

private:
	std::string message;
};