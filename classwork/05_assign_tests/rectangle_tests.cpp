#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Create a test case to test the Rectangle class with following values:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

*/
TEST_CASE("TESTING")
{
	acc::Rectangle rec1(4, 5);
	REQUIRE(rec1.get_area() == 20);

	acc::Rectangle rec2(10, 10);
	REQUIRE(rec2.get_area() == 100);

	acc::Rectangle rec3(100, 10);
	REQUIRE(rec3.get_area() == 1000);
}
