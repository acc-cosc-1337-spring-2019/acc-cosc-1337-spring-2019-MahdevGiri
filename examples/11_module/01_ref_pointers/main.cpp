#include"ref_pointers.h"
#include<iostream>
using namespace std;

int main() 
{


	/*
	// example of how pointer works
	int num = 10;
	int num1 = 15;
	int* ptr = &num;

	*ptr = 20;
	cout <<"The value the pointer is pointing(at first) is "<< num<<endl;
	 // pointing to different address
	ptr = &num1;
	 *ptr = 30;
	 cout << "The value the pointer is pointing(at second) is " << num1 << endl;
	 */

	 /*
	 // example of how refereence works
	 int val = 5;
	 int val1 = 10;
	 int &ref_val = val;
	 ref_val = 15;
	 cout << val << endl;
	//int &ref_val = val1;  // re_val cannot point to address of anoter variable so this statement wont work
	*/

	
	//int number = 10;

	//// pointer can store the address
	//int* numberPtr = &number;

	//ref(number,numberPtr);

	//std::cout<<number;

	//std::cout << "\naddress of number: " << &number;
	//std::cout << "\n value is " << *&number;

	//std::cout << "\nAddress of numberPtr: " << &numberPtr <<"\nvalue stored at address pointer is:"<<numberPtr<< "\n direffrence to get value  " << *numberPtr;
	//


	int* hold_return_value;
	int num = 5;

	hold_return_value = return_pointer(num);



	return 0;
}