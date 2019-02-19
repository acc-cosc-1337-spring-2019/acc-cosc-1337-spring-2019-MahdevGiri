#include"vectors.h"

/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int userChoice;
	int vectorNum;
	int val;
	int primeNum;
	char keepGoing;
	
	do {
		cout << "Enter '1' if you want to get the max number\n";
		cout << "Enter '2' if you want to get the list of prime number." << endl;
		cin >> userChoice;

		if (userChoice == 1)
		{
			vector<int> myVector = { 0 };
			cout << "how many numbers do you want to enter: " << endl;
			cin >> vectorNum;
			for (int i = 0; i < vectorNum; i++)
			{
				cout << "Please enter the number " << i + 1 << " \n";
				cin >> val;
				myVector.push_back(val);
			}
			cout << "The greatest number is: " << get_max_from_vector(myVector) << endl;
		}

		else if (userChoice == 2)
		{
			cout << "Enter the number upto which you want list of prime numbers: " << endl;
			cin >> primeNum;
			cout << "The list of prime numbers upto " << primeNum << " are: " << endl;
			vector <int> prime_vector = vectors_of_primes(primeNum);
			for (int i = 0; i < prime_vector.size(); i++)
			{
				cout << prime_vector[i] << endl;

			}
		}

		cout << "Do you want to continue?" << endl;
		cout << "Enter 'y' to continue or enter any other key to exit. " << endl;
		cin >> keepGoing;

	} while (keepGoing == 'y' || keepGoing == 'Y');

	cout << "Program has ended. Thank you.\n";
	cin.get();
	cin.ignore();

	return 0;
}