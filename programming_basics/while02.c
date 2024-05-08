//Calculates the average of a sequence of integers
#include<stdio.h>

int main (void) {

    int value = 0;//current value

    printf("%s", "Enter a value or 9999 to exit: ");

    scanf("%d" , &value);

    int total = 0;//sum of integers

    unsigned int count = 0;

    while (value != 9999) {

        total += value;//update the total
        
        ++count;

        printf("%s", "Enter a value or 9999 to exit: ");

        scanf("%d" ,&value);

       
    }

     if (count != 0 ) {//show the average if the inserted values are more than zero (0)

            printf("\nThe average is: ");
            printf("%.2f\n", (double) total/count);

        } else {

            puts ("\n No values were entered");
        }



}


