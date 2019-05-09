#include<iostream>

int main()
{
	char* name = new char[10];
	std::cout << "Enter name:\n"; // no longer than 9 character
	std::cin.getline(name, 10);   // \0 is included by getline
	std::cout << name;

	delete[] name;


	char* name1 = new char[10];
	name1[0] = 'a';

	name1[9] = '\0';  // we have to give null indicator

	delete[] name1;

	name1 = nullptr;

	return 0;
}