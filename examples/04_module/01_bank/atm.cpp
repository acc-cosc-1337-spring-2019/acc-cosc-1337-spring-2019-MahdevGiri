#include"atm.h"
#include<iostream>



void ATM:: display_balance()
{
	std::cout << "Balance: " << new_customer.get_account.get_balance(); // this get balance is referring to customer class function 
}        
                                                        // and customer class is getting balance from the BankAccount class function
void ATM::deposit(double amt)
{
	BankAccount & act = new_customer.get_account();
	act.deposit(amt);
}

void ATM::withdraw(double amt)
{
	 new_customer.get_account().withdraw(amt);
}