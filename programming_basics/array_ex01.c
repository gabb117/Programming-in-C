// ex. two-dimensional array

#include <stdio.h>
#define SIZE 3
//symbolic constant = 3


int main (void) {

int x;
int y;
int table [SIZE] [SIZE];
//defined table as an integer array with 3 rows and three columns
    for (x = 0; x < SIZE; x++) {

        for (y = 0; y < SIZE; y++) {

         table [x] [y] = x + y;
         printf ("table: [%d][%d] = %d\n" , x, y, table [x] [y]); 

        }        /*    | 0 | 1 | 2 |            table: [0][0] = 0
                    ---------------             table: [0][1] = 1
            row      0 | 0 | 1 | 2 |            table: [0][2] = 2
                    ---------------             table: [1][0] = 1
            row      1 | 1 | 2 | 3 |            table: [1][1] = 2
                    ---------------             table: [1][2] = 3
            row      2 | 2 | 3 | 4 |            table: [2][0] = 2
                                                table: [2][1] = 3                 
                table of rows and columns       table: [2][2] = 4               
                                            
                                                the for loop output               
                                                */

    }
    
}

