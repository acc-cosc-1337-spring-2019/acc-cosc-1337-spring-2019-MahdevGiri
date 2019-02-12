#include"dna.h"

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char keepGoing;
	int choice;
	string dna;
	do {
		cout << "Please enter the DNA string: " << endl;
		cin >> dna;
		cout << "Please enter '1' to get GC content and '2' to get DNA complement: " << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "GC Content of the given DNA is: " << get_gc_content(dna) << endl;
		}
		else if (choice == 2)
		{
			cout << "Complement DNA of the given DNA is: " << get_dna_complement(dna)<<endl;
		}
		else
		{
			cout << "Sorry wrong input" << endl;
		}
		cout << "Do you want to continue: " << endl;
		cout << "Enter 'y' or 'Y' to continue or enter any other key to exit: " << endl;
		cin >> keepGoing;
	} while (keepGoing == 'y' || keepGoing == 'Y');

	cout << "Program has exited. Thank You.";
    cin.get();
	cin.ignore();
	return 0;
}