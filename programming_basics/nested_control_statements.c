#include <stdio.h>

int main (void) {

    unsigned int passes = 0 ;

    unsigned int failures = 0;

    unsigned int student = 1;

    int result;

    while (student <= 10) {
        
        printf("%s", "Result (1 = pass, 2 = fail): ");

        scanf("%d", &result);

        if (result == 1) {
            
            passes = passes + 1;
        
        } else {
            failures = failures + 1;
        }

        student = student +1;
    }

    printf("Passe %u\n", passes); // the %u is linked to the unsigned viarable used oon the top of the code  

    printf("Failed %u\n", failures);

    if (passes > 8) {
        printf("Bonus to instructor!!");
    }

}