#include"memory_leak.h"

int main() 
{
	memory_leak();  // we leaked memory little bit

	while (true)
	{
		memory_leak(); // we leaked lots of memory
	}
	return 0;
}