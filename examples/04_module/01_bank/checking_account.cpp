
#include"checking_account.h"

double CheckingAccount::get_balance()
{
	std::cout << "CheckingAccount is called\n";
	return BankAccount::get_balance();
}