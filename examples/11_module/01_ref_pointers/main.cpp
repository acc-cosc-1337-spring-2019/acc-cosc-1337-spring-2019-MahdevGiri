#include"ref_pointers.h"
#include<iostream>
using namespace std;

int main() 
{
	int number = 10;

	// pointer can store the address
	int* numberPtr = &number;

	ref(number,numberPtr);

	std::cout<<number;

	std::cout << "\naddress of number: " << &number;
	std::cout << "\n value is " << *&number;

	std::cout << "\nAddress of numberPtr: " << &numberPtr <<"\nvalue stored at address pointer is:"<<numberPtr<< "\n direffrence to get value  " << *numberPtr;

	return 0;
}