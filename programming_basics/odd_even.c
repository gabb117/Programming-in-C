/*

 * odd_even.c
 *
 *  Created on: 2 nov 2023
 *      Author: gabrielesagnelli
 */

//the following code shows if an integer is even or odd 

#include<stdio.h>

int main (void) {
    
    int integer1;

    printf("%s", "Write an integer, is it even or odd?\n");

    scanf("%d", &integer1);

    if (integer1 % 2 == 0) {
        printf("%d is an even integer\n", integer1);
    } else {
        printf("%d in an odd integer\n", integer1);
    }
}