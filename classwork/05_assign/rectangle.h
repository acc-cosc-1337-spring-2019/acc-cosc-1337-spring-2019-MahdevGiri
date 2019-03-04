
/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area 
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

namespace acc { // to create our own namespace so that we do not conflict with the standard one
	class Rectangle
	{
	public:
		Rectangle(int w, int h); // constructer to set member variable to given parameter value

		// acceser function to return the area
		int get_area() const;

	private:
		int area;
		int width;
		int height;
		void calculate_area();
	};
}