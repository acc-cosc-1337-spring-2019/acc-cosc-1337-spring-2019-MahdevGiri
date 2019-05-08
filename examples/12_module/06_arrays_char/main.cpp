#include<iostream>
using namespace std;
int main()
{
	char name0[] = "John";
	cout << name0 << std::endl;

	for (int i = 0; name0[i] != '\0'; i++)
	{
		cout << name0[i];
	}

	char name1[5] = "Mary";
	name1[4] = '\0';
}