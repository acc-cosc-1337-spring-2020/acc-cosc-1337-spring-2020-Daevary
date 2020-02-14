#include "while.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
	int num, sum;

	cout << "enter a number: ";
	cin >> num;

	sum = sum_of_squares(num);

	cout << "sum of squares for " << num << "is" << sum;

	return 0;
}