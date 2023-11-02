/*

 * scanf.c
 *
 *  Created on: 26 ott 2023
 *      Author: gabrielesagnelli
 */


#include<stdio.h>

int main (void) {
	int integer1;
	int integer2;

	printf("First number is:\n");

	fflush(stdout);

	scanf("%d", &integer1);

	printf("second number is:\n");

	fflush(stdout);


	scanf("%d", &integer2);

	int sum;

	sum = integer1 + integer2;

	printf("sum is: %d\n", sum);

	fflush(stdout);


}
