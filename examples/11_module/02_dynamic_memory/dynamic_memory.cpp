#include"dynamic_memory.h"
#include<iostream>


void allocate_use_release()
{
	int stack_num{ 5 }; // stack variable, it is like (int num = 5)
	int* num = new int(5); // heap, data variable  :allocate
	std::cout << *num<<"\n";  // use the value

	std::cout << "\nGetting all the values!!!\n";
	std::cout << "The address of num pointer in stack is: " << &num << "\n";
	std::cout << "The value stored at that address is: " << num << "\n";
	std::cout << "Direfference that value: " << *num << "\n";
	delete num;      // release the memory

	std::cout << "\nChecking the change in values after the delete\n";
	std::cout << "The address of num pointer in stack(after delete) is: " << &num << "\n";
	std::cout << "The value stored at that address is: " << num << "\n";
	std::cout << "Direfference that value: " << *num << "\n";

	num = nullptr;

	std::cout << "\nAgain checking the changes after the null \n";
	std::cout << "The address of num pointer in stack(after nullptr) is: " << &num << "\n";
	std::cout << "The value stored at that address is: " << num << "\n";
	//std::cout << "Direfference that value: " << *num << "\n";

	//std::cout << num;
}