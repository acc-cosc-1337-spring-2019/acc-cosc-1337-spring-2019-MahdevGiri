#include "bank_account.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
	// passing the paramater act of datatype BankAccount
	Customer(BankAccount act) : new_account(act){}  //constructor is defined and implemented in same file(.h file)
	double get_balance()const { return new_account.get_balance();} //function is defined and implemented in same file(.h file)
	                                                              // this function is referring to the BankAccount class function
private:
	
	BankAccount new_account;  // creating private variable of type BankAccount datatype
};


#endif