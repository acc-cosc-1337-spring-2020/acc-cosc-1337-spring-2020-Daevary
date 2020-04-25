//
//TODO 7 add template

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <cstddef> // size_t datatype
#include <stddef.h>

class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor
	Vector& operator=(const Vector& v); //copy assignment - rule of 3
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; } 
	int& operator[](int i)const { return nums[i]; }
	~Vector(); // destructor - rule of 3 

private:
	size_t size; //stack variable
	int*nums; // telling compiler to save memory 


};

#endif

//doesn't belong to class
//free function
void use_vector();