#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int& ref_r = r;

	cout << "Address of r: " << &r << "\n";
	cout << "Value of r: " << r << "\n";
	cout << "Address of ref_r: " << &ref_r << "\n\n";

	int* ptr_p = p;
	cout << "Address of p: " << &p << "\n";
	cout << "Value of p: " << p << "\n";
	cout << "Address of ptr_p: " << &ptr_p << "\n\n";

	cout << "Contents(address) of ptr_p: " << ptr_p << "\n";
	
	return 0;
}