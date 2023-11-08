#include <stdio.h>

//somme di due valori inseriti e indica se ogni valore è pari o dispari

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