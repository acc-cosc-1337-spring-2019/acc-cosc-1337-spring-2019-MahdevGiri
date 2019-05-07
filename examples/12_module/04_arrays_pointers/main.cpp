#include<iostream>
using namespace std;

int main() 
{

	const int SIZE = 5;
	int hours[SIZE] = { 5,10,20,30,7 };
	 
	int* first_element = hours;
	std::cout << *first_element << "\n";

	std::cout << *(first_element + 1) << "\n"; // jumps the address by 4 byte

	std::cout << *first_element << "\n";

	*first_element++;
	std::cout << *first_element << "\n\n";

	//forward iteration
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *hours_ptr << std::endl;
		hours_ptr++;  // pointing to next address each time
	}

	//reverse iteration
    for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		cout << *hours_ptr << std::endl;
	}


	return 0;
}