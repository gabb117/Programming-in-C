/*

 * comparation<>C.c
 *
 *  Created on: 2 nov 2023
 *      Author: gabrielesagnelli
 */

#include<stdio.h>

int main (void) {
    int num1, num2;
    printf("Insert two number to compare them\n");
    
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d greater than %d\n", num1, num2);
    } else {
        printf("%d less than %d\n", num1, num2);
    }
}