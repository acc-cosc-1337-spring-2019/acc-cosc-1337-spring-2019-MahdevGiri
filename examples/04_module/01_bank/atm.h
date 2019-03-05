
#include "customer.h"

#ifndef ATM_H
#define ATM_H

class ATM

{

public:
	//ATM():account(1,5){ } //constructor
	// passing the paramater c of datatype Customer
	ATM(Customer c ) : new_customer(c) { } //constructor is defined and implemented in same file(.h file)

	void display_balance(); // this function is referring to the Customer class function

private:

	Customer new_customer; // creating private variable of type Customer datatype
};

 #endif