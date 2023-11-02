/*

 * aritmeticOperations.c
 *
 *  Created on: 27 ott 2023
 *      Author: gabrielesagnelli
 */

#include<stdio.h>

int main (void) {

	int num1, num2;

	printf("insert first number\n");

	fflush(stdout);

	scanf("%d", &num1);

	printf("insert second number\n");

	fflush(stdout);

	scanf("%d", &num2);

	int sum = num1 + num2;

	int minus = num1 - num2;

	int increase = num1 * num2;

	int divide = num1 / num2;
	
	int remainder = num1 % num2;

	printf ("Sum is: %d\n", sum);

	fflush(stdout);

	printf("Minus is: %d\n", minus);

	fflush(stdout);

	printf ("Increase is: %d\n", increase);

	fflush(stdout);

	printf ("Divide is: %d\n", divide);

	fflush(stdout);
	
	printf ("Remainder is: %d\n", remainder);
	
	fflush(stdout);

}


// To avoid the repeting of printf use also:
// printf("insert two numbers\n");
// scanf("%d %d", &num1, &num2);


