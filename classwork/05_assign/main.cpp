#include "rectangle.h"
#include<iostream>
#include<vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	std::vector<acc::Rectangle> rectangles;
	acc::Rectangle rectangle1(4, 5);     // object 1 to pass the value w = 4 and h = 5
	acc::Rectangle rectangle2(10, 10);   // object 2 
	acc::Rectangle rectangle3(100, 10);  // object 3

	rectangles.push_back(rectangle1);
	rectangles.push_back(rectangle2);
	rectangles.push_back(rectangle3);

	for (auto a : rectangles)
	{
		std::cout << a.get_area() << "\n";
	}

	std::cout <<"Recatangle1 is: "<< rectangle1.get_area() << " \n";
	std::cout <<"Recatangle2 is: " << rectangle2.get_area() << " \n";
	std::cout <<"Recatangle3 is: " << rectangle3.get_area() << " \n";
	
	return 0;
}