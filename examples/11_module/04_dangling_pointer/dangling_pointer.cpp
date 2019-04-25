#include "dangling_pointer.h"

//

void dangling_pointer()
{
	int *ptr = new int(100);
	int* innocent_ptr = ptr;
	delete ptr;
	// other lines of code
	// use of innocent ptr in future will cause the problem
}
