#include<stdio.h>

int main (void) { 

    unsigned int counter;

    int grade;
    
    int total;

    int average;

    total = 0;

    counter = 1;

    while (counter <= 10) {

        printf("%s\n", "Enter a grade:" );

        scanf("%d\n", &grade);

        total = total + grade;

        counter = counter + 1;

    }

    average = total / 10;

    printf("The average is: %d \n", average );
}