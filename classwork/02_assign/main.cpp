#include "assign02.h"
#include <iostream>
using namespace std;
int main() 
{
	//create a double variable named hours
	//create a double variable named hourly_rate

	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate

	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable

	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   


	
		double hours, hourly_rate, total_pay;
		cout << "Enter hours: " << endl;
		cin >> hours;
		cout << "Enter hourly rate: " << endl;
		cin >> hourly_rate;

		total_pay = gross_pay(hours, hourly_rate);
		cout << "Gross pay is: " << total_pay << endl;

		return 0;
	}



