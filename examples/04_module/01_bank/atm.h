
#include "customer.h"

#ifndef ATM_H
#define ATM_H

class ATM

{

public:
	//ATM():account(1,5){ } //constructor

	ATM(Customer c ) : customer(c) { } //constructor

	void display_balance();

private:

	Customer customer;
};

 #endif