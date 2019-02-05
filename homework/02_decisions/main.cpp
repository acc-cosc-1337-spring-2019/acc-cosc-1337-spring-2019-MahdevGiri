#include<iostream>
#include "decisions.h"

//write include statements
using std::cout;
using std::cin;
using std::endl;

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	string letter_grade;
	int grade_points, credit_hours, credit_points;
	int total_credit_hours = 0;
	double total_credit_points = 0.0;

	cout << "Please enter the letter grade for class 1 in uppercase: " << endl;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Please enter the credit hours for class 1: " << endl;
	cin >> credit_hours;
	total_credit_hours += credit_hours;

	credit_points = grade_points * credit_hours;
	total_credit_points += credit_points;

	cout << "Please enter the letter grade for class 2 in uppercase: " << endl;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Please enter the credit hours for class 2: " << endl;
	cin >> credit_hours;
	total_credit_hours += credit_hours;

	credit_points = grade_points * credit_hours;
	total_credit_points += credit_points;

	cout << "Please enter the letter grade for class 3 in uppercase: " << endl;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Please enter the credit hours for class 3: " << endl;
	cin >> credit_hours;
	total_credit_hours += credit_hours;

	credit_points = grade_points * credit_hours;
	total_credit_points += credit_points;

	double gpa = calculate_gpa(total_credit_hours, total_credit_points);
	cout <<"Your gpa is: "<< gpa << endl;

	cin.get();
	cin.ignore();
	return 0;
}