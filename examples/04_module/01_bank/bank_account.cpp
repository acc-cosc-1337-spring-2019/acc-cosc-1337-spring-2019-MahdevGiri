#include "bank_account.h"
#include<iostream>

BankAccount::BankAccount()
{

}

/*BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}*/

BankAccount::BankAccount(int act, double bal) // paramaterlized constructor or overload constructer
{
	account_number = act;
	balance = bal;
}

 //accesser function
double BankAccount::get_balance () const
{
	transcations.push_back(Transcation("Inquiry", 0 , balance));
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
	// if (amount_greater_zero(amount) && balance >=amount)
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

void display(const BankAccount& act)
{
	std::cout << "Account: "<<act.account_number<<"\n";
	std::cout << "Balance: " << act.balance;
}

BankAccount operator + (BankAccount &act1, const BankAccount & act2)
{
	act1.balance = act1.balance + act2.balance;
	return act1;
}

 std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Account: " << b.account_number << "\n";
	out << "Account: " << b.balance << "\n";
	return out;
}