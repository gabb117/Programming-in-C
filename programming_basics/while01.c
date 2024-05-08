//prints numbers from 1 to 20 by printing 5 integers per line

#include<stdio.h>

int main (void) {

    unsigned int x = 1;

    while (x <= 20) {

        if (x % 5 == 0) {
            
            printf("%u\n", x++);

        } else {

            printf("%u\t", x++);
        }
    }
} /*Output:1       2       3       4       5
           6       7       8       9       10
           11      12      13      14      15
           16      17      18      19      20*/