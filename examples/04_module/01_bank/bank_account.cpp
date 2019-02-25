#include "bank_account.h"

/*BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}*/
BankAccount::BankAccount(int act, double bal) // paramaterlized constructor or overload constructer
{
	account_number = act;
	balance = bal;
}

// accesser function
double BankAccount::get_balance () const
{
	return balance;
 }

void BankAccount::deposit(double amount)
{
	if (amount_greater_zero(amount))
	{
		balance += amount;
	}
}

void BankAccount::withdraw(double amount)
{
	if (amount > 0 && balance >= amount)
	{
		balance -= amount;
	}
}

// private function to check if the amount is greater than 0
bool BankAccount::amount_greater_zero(double amount)
{
	if (amount > 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}