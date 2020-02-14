//write includes statements
#include "loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num, choice;

	do
	{
		int num;

		cout << "Enter a number: ";
		cin >> num;
		cout << factorial(num) << "\n\n";

		std::cout << "Continue...";
		std::cin >> choice;

	} while (choice == 1);

	return 0;
}