//#include "bank_account.h"
//#include<vector>
#include<iostream>
#include"atm.h"

int main() 
{
	BankAccount account(123, 500);
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();

	display(account);

	
	BankAccount b(1, 900);
	BankAccount c = account + b;
	std::cout << "\n";
	display(c);


	std::cout << "\n";
	 std::cout<<c;
	// std::cin<<c;

	//BankAccount account(123456, 500);
	//BankAccount copy = account;   // copy the account object;
	//std::cout<<"\n"<<copy.get_balance();
	//account.deposit(50);
	//std::cout<<"\n"<<copy.get_balance();

	/* for (auto tic_tac_toe : list)
     {
		 cout << tic_tac_toe << "\n";
	 }
	*/
	


	//std::vector<BankAccount>accounts;
    //BankAccount account(12345689, 500);  //object1  (this object calls the constructer for the first time)
	//BankAccount account1(55545689, 5000); //object2 (this object calls the constructer for the second time)

	//accounts.push_back(account);
	//accounts.push_back(account1);

	//for (auto act : accounts)
	//{
	//	std::cout << act.get_balance() << "\n";
	//}

	return 0;
}