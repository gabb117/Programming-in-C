#include <stdio.h>

//sums of two entered values ​​and indicates whether each value is even or odd

int main (void) {

    unsigned int num = 1;

    unsigned int total = 0;

    while (num != 0) {

    printf("%s", "Enter numbers or enter 0 to exit\n" );

    scanf("%u", &num);

    total += num;

    printf("The result is: %u\n", total);

        if (total % 2 == 0) {
        
        puts("The result is even\n");
    
        } else {
        
        puts("The result is odd\n");
        }


    }

    

}