#include "assign02.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() 
{
	//create a double variable named hours
	//create a double variable named hourly_rate
	double hours, hourly_rate, gross_salary;

	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate
	cout << "Enter hours: " << endl;
	cin >> hours;
	cout << "Enter hourly rate: " << endl;
	cin >> hourly_rate;

	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable
	gross_salary = gross_pay(hours, hourly_rate);

	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00  
    
	cout << "Gross pay is: " << gross_salary << endl;

		return 0;
	}



