#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>
#include<vector>
#include"transcation.h"
class BankAccount 
{
public:
	
	BankAccount(); // default constructor
	BankAccount(int act, double bal);// overloading constructor
	double get_balance () const;
	void deposit(double amount);
	void deposit(int pin, double amount); //overloading public function
	void withdraw(double amount);

	friend void display(const BankAccount& act);
	friend BankAccount operator + (BankAccount &act1, const BankAccount & act2);
	friend std:: ostream & operator<<(std::ostream & out, const BankAccount & b);
//friend std::istream & operator>>(std::istream & in, const BankAccount & b);
	friend class Transcation;
private:
	std::vector<Transcation> transcations;
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};
#endif //!BANK_ACCOUNT_H