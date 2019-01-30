//Write the function code that returns the product of hours and hourly_rate.
#include "assign02.h"
#include <iostream>
using namespace std;

double gross_pay(double hours, double hourly_rate)
{
	double gross_amount = hours * hourly_rate;
	return gross_amount;
}