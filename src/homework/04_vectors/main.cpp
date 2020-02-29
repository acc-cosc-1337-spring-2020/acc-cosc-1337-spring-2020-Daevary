#include "vectors.cpp"
#include <vector>
#include <iostream>

using std::cout; using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	std::vector<int> numbers{ 8, 4, 20, 88, 66, 99 };

	std::vector<int> result;

	int choice = 0, num, i;

    while (choice != 'x' || choice != 'X')
    {
        cout << "Enter 1 to Get Max from vector.\n";
        cout << "Enter 2 for Get primes.\n";
        cout << "Enter your choice:";

        cin >> choice;



        switch (choice)
    }


	cout << "The max number is: " << get_max_from_vector(numbers) << endl;
    cout << "Enter number to get the primes for that number: ";
    cin >> num; 

    cout << "If you would like to exit, press x. "

	return 0;
}