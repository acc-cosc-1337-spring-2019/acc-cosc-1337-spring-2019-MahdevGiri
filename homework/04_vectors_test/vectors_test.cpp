#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"vectors.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a test case for get_max_from_vector with values:
vector values 3,8,1,99,1000 returns 1000
vector values 15,12,11,99,88 returns 99
vector values 150,120,11,990,88888 returns 88888
*/
TEST_CASE("Test get_max_from_vector function")
{
	vector<int> val1 = { 3,8,1,99,1000 };
	vector<int> val2 = { 15,12,11,99,88 };
	vector<int> val3 = { 150,120,11,990,88888 };
	REQUIRE(get_max_from_vector (val1) == 1000);
	REQUIRE(get_max_from_vector(val2) == 99);
	REQUIRE(get_max_from_vector(val3) == 88888);
}

/*
Write a test case for is_prime with values:
2 returns true
4 returns false
43 returns true
44 returns false
*/
TEST_CASE("Test is_prime function")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}


/*
Write test case for vector_of_primes here with
argument 10 return vector should have the following items:
2 3 5 7
argument 50 return vector should have the following items:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/
TEST_CASE("Test function vectors_of_primes")
{
	vector<int> val1 = { 2,3,5,7 };
	vector<int> vector1 = vectors_of_primes(10);
	for (int i = 0; i < vector1.size(); i++)
	{
		REQUIRE(vector1[i] == val1[i]);
	}
	vector<int> val2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	vector<int> vector2 = vectors_of_primes(50);
	for (int i = 0; i < vector2.size(); i++)
	{
		REQUIRE(vector2[i] == val2[i]);
	}
	
	/*vector<int> test1 = { 2, 3, 5, 7 };   
	REQUIRE(vectors_of_primes(10) == test1);
	vector<int> test2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };  
	REQUIRE(vectors_of_primes(10) == test1);
	*/
	
}