#include<iostream>

using std::cout;

int main() 
{
	int num = 5;

	cout << "Value of num is: " << num << " Address is: " << &num << "\n";

	int &num_ref = num; //trying to save this value of num into num 
	num_ref = 10;
	cout << "Value of num is: " << num << " Address is: " << &num;

	return 0;
}