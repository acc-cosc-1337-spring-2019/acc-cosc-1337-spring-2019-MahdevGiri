#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
class BankAccount 
{
public:

	BankAccount(); // default constructor
	BankAccount(int act, double bal);// overloading constructor
	double get_balance () const;
	void deposit(double amount);
	void deposit(int pin, double amount); //overloading public function
	void withdraw(double amount);

private:
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};
#endif //!BANK_ACCOUNT_H