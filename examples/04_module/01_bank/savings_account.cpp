#include "savings_account.h"

void SavingsAccount::add_interest_earned()
{
	double interest_earned = BankAccount::get_balance() * time * interest_rate / 100;
	deposit(interest_earned);
}

double SavingsAccount::get_balance()
{
	std::cout << "SavingsAccount is called\n";
	double interest_earned = BankAccount::get_balance() * time * interest_rate / 100;
	return BankAccount::get_balance()+interest_earned;
}