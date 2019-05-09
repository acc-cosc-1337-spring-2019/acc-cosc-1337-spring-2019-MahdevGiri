#include "recursion.h"
#include<iostream>

void display(int n)
{
	if (n == 0)
	{
		std::cout << "base case\n";
		return;
	}

	std::cout << "hello\n";
	display(n-1);
}

int factorial(int n)
{
	int f = 1;
	if (n == 0)
	{
		std::cout << "base case\n";
		return f ;
	}

	{
		std::cout << "Function called (load the stack)\n " << n - 1 << "\n";

		f = n * factorial(n - 1);

		std::cout << "unload stack"<< n - 1 << "\n";
		return f;
	}



}
