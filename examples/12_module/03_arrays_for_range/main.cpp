#include<iostream>
using namespace std;
int main()
{

	const int SIZE = 5;
	int hours[SIZE] = { 5,10,20,30,7 };

	for (auto hour : hours)
	{
		cout << hour << "\n"; //makes copy // stack will grow to store copy
	}

	int i = 1;
	for (auto& hour : hours)
	{
		cout << hour << "\n"; 
		hour = i++;   // changes the value // stack will not grow
	}

	for (auto hour : hours)
	{
		cout << hour << "\n";
	}

	return 0;
}