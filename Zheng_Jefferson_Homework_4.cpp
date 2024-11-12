//Jefferson Zheng
//November 12, 2024
//Homework 4

#include <iostream>
#include <string>

using namespace std;

void filterEvens(int*);        //Declare function filterEvens
void dna_to_rna(string);        //Declare function dna_to_rna

int main() {
    int myArray[8], cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}, total = 0, best = 0;        //Declares 2 arrays and 2 variables

    cout << "Input 8 integers: ";        //user inputs 8 integers
    for(int iter = 0; iter < 8; iter++)        //For each user input
        cin >> myArray[iter];        //Store to the array

    filterEvens(myArray);        //Filters evens

    for(int iter = 0; iter < 10; iter++) {        //For each salesperson
        total += cars[iter];        //Add to total
        if (cars[iter] > cars[best])        //If they have the most sales
            best = iter;        //Update new best
    }

    cout << "\nThe total number of cars sold is " << total << "." << endl;        //Outputs total cars sold
    cout << "The best salesperson is Salesperson #" << best + 1 << " with " << cars[best] << " cars sold!" << endl;        //Outputs best salesperson and sale amount

    dna_to_rna("TUGCU&T#(TU@82TG829J281&Yy**&T*87TUGC)");        //Converts dna to rna function

    return 0;        //Exits successfully
}

void filterEvens(int* array) {        //Function for filtering evens
    for(int iter = 1; iter < 8; iter++) {        //For all items in array
        if ((array[iter] % 2) == 0)        //If even
            cout << array[iter] << " ";        //Output value
    }
}

void dna_to_rna(string dna) {        //Function got for converting dna to rna
    for(int iter = 1; iter < dna.length(); iter++) {        //For all characters in string
        if(dna[iter] == 'A')        //If A
            cout << "U";        //Print U
        else if(dna[iter] == 'C')        //If C
            cout << "G";        //Print G
        else if(dna[iter] == 'G')        //If G
            cout << "C";        //Print C
        else if(dna[iter] == 'T')        //If T
            cout << "A";        //Print A
    }
}

/*
Input 8 integers: 1238 1238 1293 12904 123 94 1234 1123
1238 12904 94 1234
The total number of cars sold is 58.
The best salesperson is Salesperson #5 with 14 cars sold!
CGAAACAACG
*/





