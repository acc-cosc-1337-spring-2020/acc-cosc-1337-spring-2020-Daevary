#include "vector.h"
#include <iostream>

/*
Initialize nums to size dynamic array
initialize ea. arry element to 0
*/
Vector::Vector(size_t sz)
	: size {sz}, nums{new int[sz], space
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

/*
Copy v.size to new class 
Create new dynamic memory
Initialize array elements to the v.nums array values
*/
Vector::Vector(const Vector & v) : size{ v.size }, nums{new int [v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

/*
allocate teporary dynamic array of size v (v1)
Copy v1 elements to temp array
Deallocate old v2 nums array
Point v2 nums array to temp array
Set v2 size to v1 size 
return a self copy of Vector
*/
Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i]; //temp means temporary btw
	}

	delete nums;

	nums = temp;
	size = v.size;

	return *this;


}



/*
Get the dynamic memory from v 
Get the size from v
Point the v.nums to nullptr
*/

Vector::Vector(Vector && v)
	: size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}

/*
Deallocate original dynamic memory 
Get the dynamic memory from v
Get the size from v
Point v.nums to nullptr
Set v.size to 0
*/

Vector & Vector::operator=(Vector && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}

/*
Make sure new allocation is greater than space
Create temporary dynamic array of size new allocation
copy values from old memory array to temp array
delete the old memory array
set nums to temp memory
set space = new allocation
*/

void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}

	int * temp = new int[new_allocation];

	for (size_t i = 0; i < 5; ++i)
	{
		temp[i] = nums[i];
	}

	delete[] nums;

	nums = temp;

	space = new_allocation;
}

/*
Release dynamic memory
Deallocate memory
*/
Vector::~Vector()
{
	std::cout << "\nrelease memory\n";
	delete[] nums;
}
 // ================
// free function
void use_vector()
{
	Vector* v1 = new Vector(3);
	delete v1;
}

Vector get_vector()
{
	Vector v(3);

	return v();
}
