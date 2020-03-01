#include "vectors.h"
#include <vector>
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int>& numbers)
{
	int max_num = numbers[0];

	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] > max_num)
		{
			max_num = numbers[i];
		}
	}

	return max_num;
}



/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int num)
{
	int i;

	if (num == 2 || num == 3)
	{
		return true;
	}
	else if (num % 2 == 0)
	{
		return false;
	}
	else 
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
			
		}
	}
	
	return true;

}
/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
std::vector<int> vector_of_primes(int num)
{
	int i;

	std::vector<int> result;

	for (i = 2; i <= num; i++)
	{
		if (is_prime(i)) result.push_back(i);
	}

	return result;
}