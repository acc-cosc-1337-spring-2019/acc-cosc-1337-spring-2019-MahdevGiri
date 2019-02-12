#include "dna.h"

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string &dna)
{
	double num = 0.0;
	for (char a : dna)
	{
		if (a == 'G' || a == 'g' || a == 'C' || a == 'c')
		{
			num += 1;
	    }
	}
	double string_length = dna.length();

	return num/string_length;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	int len = dna.length();
	
	string new_dna = "";

	for (int i = (len - 1);  i >= 0;  i--)
	{

		new_dna = new_dna + dna[i];
		
    }
	return  new_dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/
string get_dna_complement(string dna)
{
	string dna1 = get_reverse_string(dna);
	
	for (int i = 0; i < dna1.length(); i++)
	{
		if (dna1[i] == 'A')
		{
			dna1[i] = 'T';
		}
		else if (dna1[i] == 'T')
		{
			dna1[i] = 'A';
		}
		else if (dna1[i] == 'C')
		{
			dna1[i] = 'G';
		}
		else if (dna1[i] == 'G')
		{
			dna1[i] = 'C';
		}
	}

	return dna1;
}