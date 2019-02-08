#include "loops.h"

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int num;
	do {
		std::cout << "Enter the number: \n";
		cin >> num;
		cout <<"Factorial is: "<< factorial(num);
		std::cout << "\nDo you want to continue \n";
		std::cout << "Enter 'y' to continue or any other key to exit\n";
		cin >> choice;
	} while (choice=='y'||choice=='Y');
	
	return 0;
}