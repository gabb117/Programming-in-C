// array

/*
An array can only store values ​​of the same type. 
The index of an array must be an integer or an integer expression (sizeT). 
If there are fewer initializers in an initializer list than the number of elements 
in the array then C automatically initializes the remaining elements to zero. 
Individual elements of an array are passed by value, but if the entire array 
is passed to a function then changes to the elements will be reflected in the original.
*/

#include <stdio.h>
#define SIZE 10 //defines a symbolic constant SIZE 

int main (void) {

double fractions [SIZE] = {0.0}; 
//initializing all elements with 0.0

fractions [6] = 2.679;

fractions[9] = 1.667;
//only one element is initialized here and rest remain as zeros

printf("Primo : %.2f\nSecond : %.2f\n", fractions[6], fractions[9]);
//Print the 9th element of the array with two number after the "." and "f"

int x;
for (x = 0; x < SIZE; x++) {
    printf("fractions [%d] = %.2f\n", x, fractions[x]);
}
//Print all elements of array using for loop
}
