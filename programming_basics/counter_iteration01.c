#include<stdio.h>

int main (void){
    
    int n = 2147483642;

    int i = 1;

    while (i < 10) {

        printf("%d\n", n + i);
        i++;

    }

}
/* Output:2147483643
          2147483644
          2147483645
          2147483646
          2147483647
         -2147483648
         -2147483647
         -2147483646
         -2147483645
the limits of variable int

*/