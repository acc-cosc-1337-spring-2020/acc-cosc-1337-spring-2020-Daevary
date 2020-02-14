/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/
#include<iostream>
#include "loops.h"

int factorial(int num)
{
	int num1 = 1;

	for (int i = 1; i <= num; ++i)
	{
		num1 = num1 * i;
	}

	return num1;
}
