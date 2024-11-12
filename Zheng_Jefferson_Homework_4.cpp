//Jefferson Zheng
//November 12, 2024
//Homework 4

#include <iostream>
#include <string>

using namespace std;

void filterEvens(int*);
void dna_to_rna(string);

int main() {
    int myArray[8], cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}, total = 0, best = 0;

    cout << "Input 8 integers: ";
    for(int iter = 0; iter < 8; iter++)
        cin >> myArray[iter];

    filterEvens(myArray);

    for(int iter = 0; iter < 10; iter++) {
        total += cars[iter];
        if (cars[iter] > cars[best])
            best = iter;
    }

    cout << "\nThe total number of cars sold is " << total << "." << endl;
    cout << "The best salesperson is Salesperson #" << best + 1 << " with " << cars[best] << " cars sold!" << endl;

    dna_to_rna("TUGCU&T#(TU@82TG829J281&Yy**&T*87TUGC)");

    return 0;
}

void filterEvens(int* array) {
    for(int iter = 1; iter < 8; iter++) {
        if ((array[iter] % 2) == 0)
            cout << array[iter] << " ";
    }
}

void dna_to_rna(string dna) {
    for(int iter = 1; iter < dna.length(); iter++) {
        if(dna[iter] == 'A')
            cout << "U";
        else if(dna[iter] == 'C')
            cout << "G";
        else if(dna[iter] == 'G')
            cout << "C";
        else if(dna[iter] == 'T')
            cout << "A";
    }
}

/*
Input 8 integers: 1238 1238 1293 12904 123 94 1234 1123
1238 12904 94 1234
The total number of cars sold is 58.
The best salesperson is Salesperson #5 with 14 cars sold!
CGAAACAACG
*/





