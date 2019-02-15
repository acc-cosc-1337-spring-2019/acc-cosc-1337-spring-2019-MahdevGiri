#include"sequence.h"
/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()

{
	string search_value, replace_value;
	vector<string>str = { "John","Marry","Patty","Sam" };
	display_vector(str);

	cout << "Enter the name you want to search for: " << endl;
	cin >> search_value;
	cout << "Enter the value you want to replace with: " << endl;
	cin >> replace_value;
	update_vector_element(str, search_value, replace_value);
	display_vector(str);

	cin.get();
	cin.ignore();
	return 0;
}

