//raise x to power y

#include <stdio.h>

int main (void) {

    printf("%s", "First integer: ");

    unsigned int x;

    scanf("%u", &x);//read x

    printf("%s", "Second integer");

    unsigned int y;

    scanf("%u", &y);//read y

    unsigned int i = 1;

    unsigned int power = 1;

    while (i <= y) {
        power *= x;
        ++i;
    } // end of while

    printf("The result is %u\n", power);
    //end of main function


}