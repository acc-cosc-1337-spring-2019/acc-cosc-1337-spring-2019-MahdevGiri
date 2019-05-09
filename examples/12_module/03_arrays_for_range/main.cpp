#include<iostream>
using namespace std;
int main()
{

	const int SIZE = 5;
	int hours[SIZE] = { 5,10,20,30,7 };

	for (auto hour : hours)
	{
		cout << hour << "\n"; //makes copy // stack will grow to store copy
		cout << "Address: " << &hour << "\n";
	}
	cout << endl;
	// to change the value using fo ranged loop
	int i = 1;
	for (auto& hour : hours)
	{
		cout << hour << "\n"; 
		cout << "Address: " << &hour << "\n";
		hour = i++;   // changes the value // stack will not grow
	}

	//after the change 
    for (auto hour : hours)
	{
		cout << hour << "\n";
	
	}

	return 0;
}