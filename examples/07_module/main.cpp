//main
#include "shape.h"
#include<iostream>
#include<memory>
#include"line.h"
#include"circle.h"
#include<vector>
int main() 
{
	/* Shape s_abstract;  can't create instance of pure virtual 
	                      function makes abstract class*/

	Shape* line = new Line(); //creates dynamic memory(heap)
	line->draw();
	delete line;

	std::cout << "\n";
	//vector of shape pointers
	std::vector < Shape *> shapes{ new Line(), new Circle() };
	//using a reference operator
	for (auto & shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	for (auto * shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";
	//shape instance using Smart Pointers
	std::unique_ptr < Shape > ln = std::make_unique<Line>();
	ln->draw();

	std::cout << "\n";

	//vector of shape insatnce using Smart Pointers
	std::vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >());
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shapes)
	{
		shape->draw();
	}
	
	return 0;
}