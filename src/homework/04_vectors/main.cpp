#include "vectors.h"
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

    while (choice != -1)
    {
        cout << "Enter 1 to Get Max from vector.\n";
        cout << "Enter 2 for Get primes.\n";
        cout << "Enter your choice:";

        cin >> choice;

		if (choice == 1) 
		{
			cout << "The max number is: " << get_max_from_vector(numbers) << std::endl;
		}
		else if (choice == 2) 
		{
			cout << "Enter number to get the primes for that number: ";
			cin >> num;
			result = vector_of_primes(num);
			for (auto prime : result) 
			{
				cout << prime << " ";
			}
			cout << "\n";
		}
		else if (choice == -1) 
		{
			cout << "Program will exit...";
		}
		else 
		{
			cout << "Invalid choice;";
		}

        
    }


	
    

	

	return 0;
}