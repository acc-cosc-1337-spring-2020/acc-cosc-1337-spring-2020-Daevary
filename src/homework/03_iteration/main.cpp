//write include statements
#include "dna.h"
#include "dna.cpp"
#include <iostream>
//write using statements
using std::cout; using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	int option;
	string dna;

	while (1)
	{
		cout << "Enter a DNA string: ";
		cin >> dna;
		cout << "\nSelect Option";
     
        cout << "1. GC Content";
            cout << "2. DNA Complement\n";
  
        cout << "Enter option: ";
        cin >> option;
        
        if (option == 1)
        {
            double content = get_gc_content(dna);
            cout << "GC content: " << content << endl;
        }
        else if (option == 2) 
        {
            string complement = get_dna_complement(dna);
            cout << "Complement: " << complement;
        }

        else 
        {
            cout << "Invalid input!";
        }
        char ch;
        cout << "\nTo continue press (Y/y): ";
        cin >> ch;

        if (ch == 'Y' || ch == 'y')
        {
            cout << "\n";
            continue;
        }
        else
        {
        }
        return 0;



}