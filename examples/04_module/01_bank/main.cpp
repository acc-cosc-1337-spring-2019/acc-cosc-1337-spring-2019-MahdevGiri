//#include "bank_account.h"
//#include<vector>
// abstraction
// encapsulation
// inheritance
#include<iostream>
#include"atm.h"
#include"savings_account.h"
#include"checking_account.h"
#include<vector>

using std::vector;

int main() 
{

	SavingsAccount s(12345, 1000);  //saving account is called
	std::cout << s.get_balance()<<"\n"; 



	BankAccount& b = s;             //saving account is called becoz of virtual function otherwise it woud be bankAccount
	std::cout << b.get_balance()<<"\n";

	CheckingAccount c(54321, 500);   //checking account is called
	std::cout << c.get_balance() << "\n";

	BankAccount& d = c;              //checking account is called becoz of virtual function otherwise it woud be bankAccount
	std::cout << d.get_balance()<<"\n";

	/*vector < std::reference_wrapper<BankAccount>>accounts{ s,c };
	for (auto & account : accounts)

	{ //account must be unwrapped with .get() to get the instance of Account

		std::cout << account.get().get_balance() << std::endl;

	}*/

	/*int num = 5;
	int &num_ref = num;
	std::cout << &num_ref<<"\n";

	BankAccount account(123, 500);
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();
	atm.deposit(50);

	

	
	BankAccount b(1, 900);
	BankAccount c = account + b;
	std::cout << "\n";
	display(c);


	std::cout << "\n";
	std::cout<<c;*/
	// std::cin<<c;

	//BankAccount account(123456, 500);
	//BankAccount copy = account;   // copy the account object;
	//std::cout<<"\n"<<copy.get_balance();
	//account.deposit(50);
	//std::cout<<"\n"<<copy.get_balance();

	/* for (auto tic_tac_toe : list)  // for homework
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