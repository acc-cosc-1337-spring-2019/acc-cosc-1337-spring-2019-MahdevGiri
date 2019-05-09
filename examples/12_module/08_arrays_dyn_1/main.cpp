#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>

int main()
{
	// stack/static array of object

	BankAccount accounts[5];
	// read data from file
	//initialize the balance

	for (auto account : accounts)
	{
		std::cout << account.get_balance() << "\n";
	}

	// read data file

	BankAccount accounts1[] = { BankAccount(5),BankAccount(10), BankAccount(50), BankAccount(100) };
	// write code to display

	return 0;
}