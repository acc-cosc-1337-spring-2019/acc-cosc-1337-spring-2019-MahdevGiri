//
#include<iostream>
#include"arr_functions.h"

void iterate_array(int * ints, int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << *ints << "\n";
		ints++; ///jumps to next address
	}
}
