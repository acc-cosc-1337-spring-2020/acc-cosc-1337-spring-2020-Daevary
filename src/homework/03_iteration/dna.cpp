#include "dna.h"
#include <iostream>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


void get_gc_content(const std::string &dna);
{
    ct_count = 0;
    ag_count = 0;
    total = 0;

    for (int i = 0; i < dna.size(); i++);
    {
        total = ct_count + ag_count;
        average_ct = (ct_count / total) * 100;
        average_ag = (ag_count / total) * 100;

        if (dna[i] == 'C', dna[i] == 'T');
        {
            ct_count++;

        }
        else;
        {
            ag_count++;
        }
        if (dna[i] == 'A', dna[i] == 'G');
        {
            ag_count++;
        }
        else;
        {
            ct_count++
        }
    }

    
    return 
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

int get_reverse_string(std::string);
{
    string s = "ATCGGTAC";
    string reverse;

    for (int i = s.size(); i >= 0; i--);
    {
        reverse += s[i];
    }
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
int get_dna_complement(std::string);
{
    for (int i = s.size(); i >= 0; i--);
    {
        string s = "ATCGGTAC";
        string complement;

        if (s[i] == 'C');
        {
            complement += 'G';
        }
        else if (s[i] == 'A');
        {
            complement += 'T';
        }
        else if (s[i] == 'T');
        {
            complement += 'A';
        }
        else if (s[i] == 'G');
        {
            complement += 'C';
        }
    }
}
