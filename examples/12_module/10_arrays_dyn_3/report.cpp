//
#include<iostream>
#include"report.h"

Report::Report()
{
	// read from file
	for (int i = 0; i < 5; ++i)
	{
		accounts[i] = new BankAccount(i);
	}
	// iterate to update balance
	
}

Report::~Report()
{
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "clear array\n";
		delete accounts[i];
		accounts = nullptr;
		
	}
}
}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}
