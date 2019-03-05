#include"atm.h"
#include<iostream>



void ATM:: display_balance()
{
	std::cout << "Balance: " << new_customer.get_balance(); // this get balance is referring to customer class function 
}                                                           // and customer class is getting balance from the BankAccount class function