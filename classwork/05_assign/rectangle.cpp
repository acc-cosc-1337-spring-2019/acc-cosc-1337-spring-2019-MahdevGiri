#include "rectangle.h"
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

acc::Rectangle::Rectangle(int w, int h)
{
    area = 0;
	width = w;
	height = h;
   calculate_area(); // have to call this function because it is private and this function stores the area in area member variable
}

 int acc::Rectangle :: get_area() const
{	 
	return area;
}

 // private function
 void acc::Rectangle::calculate_area()
 {
	 area = width * height;
 }
