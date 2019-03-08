#include "customer.h"

BankAccount & Customer::get_account()
{
	return new_account;
}
