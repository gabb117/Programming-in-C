//how to obtain the factorial product of integers
#include<stdio.h>

int main(void){

    puts("X\tFactorial of X");
    //calculates the factorial of integers from 1 to 5
    for(unsigned int i = 1; i <= 18; ++i){

        unsigned int factorial = 1;
        //calculate the factorial of the following number
        for (unsigned int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        printf("%d\t%u\n", i, factorial);
        
    }
} /*Output: 
X       Factorial of X
1       1
2       2
3       6
4       24
5       120
*/

