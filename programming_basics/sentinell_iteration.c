#include<stdio.h>

int main (void) { 

    unsigned int counter;

    int grade;
    
    int total;

    int average;

    total = 0;

    counter = 1;

    printf("%s\n", "Enter a grade, -1 to end" );

    scanf("%d\n", &grade);

    while (grade != -1) {

        total = total + grade;

        counter = counter + 1;

        printf("%s\n", "Enter a grade: " );

        scanf("%d\n", &grade);

    }

    if (counter != 1) {
    
    average = total / 10;

    printf("The average is: %d\n", average );
    
    } else if (grade == -1) {
        
        
        puts ("No grades entered");
    
    }

}