/*If we replace as limit of factorial integer 5 with 18 
this is the output: 
1       1
2       2
3       6
4       24
5       120
6       720
7       5040
8       40320
9       362880
10      3628800
11      39916800
12      479001600
13      1932053504
14      1278945280
15      2004310016
16      2004189184
17!  =    4006445056
18! =      3396534272
(18!) < (17!)
The unsigned int limit of 4294967290 has been exceeded
*/

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
}