#include<string>
#include<iostream>
#include"sample_for_ranged.h"
using std::cout;
int main() 
{
	//call count letters function
	//loop_string_w_auto("john");
	//loop_vector_w_index();
	//loop_vector_w_auto();

	vector<int> nums = { 44,55,77,11,99 };
	nums.push_back(25);
	nums.erase(nums.begin() + 1);

	loop_vector_w_index(nums);

	for (auto n : nums)
	{
		std::cout << n << "\n";
	}
	return 0;

	//loop_const_vector(nums);
}