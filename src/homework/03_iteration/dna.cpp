#include "dna.h"
#include <iostream>
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string &dna)
{
    double ct_count = 0;
    
    double total = 0;

    for (int i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'C'|| dna[i] == 'G')
        {
            ct_count++;

        }
    }

	total = ct_count / dna.size();

    
	return total;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(std::string dna)
{
    string reverse;

    for (int i = dna.size(); i > 0; i--)
    {
        reverse += dna[i-1];
    }

	return reverse;
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
string get_dna_complement(std::string dna)
{
	string complement = get_reverse_string(dna);

    for (int i = 0; i < complement.size(); ++i)
    {

        if (complement[i] == 'C')
        {
			complement[i] = 'G';
        }
        else if (complement[i] == 'A')
        {
			complement[i] = 'T';
        }
        else if (complement[i] == 'T')
        {
			complement[i] = 'A';
        }
        else if (complement[i] == 'G')
        {
			complement[i] = 'C';
        }
    }

	return complement;
}
