/*
AND = &&; -binary
OR = ||; -binary
NOT = !; -unary 
to verify if an expression have more condition */

/* Use de Morgan's law to prove that 
the original expression and new expression are equivalent:
/!(x < 5) && !(y >= 7;);
/!(a == b) || !(g != 5);
/!((x <= 8)) && ((y > 4));
/!((i > 4)) || ((j <= 6));
*/

#include<stdio.h>

int main (void) {

    int x = 10;
    int y = 1;
    /*int a = 3;
    int b = 3;
    int g = 5;
    int q = 1;
    int i = 2;
    int j = 9;
    */
    //definition of variable values

    puts ("!(x < 5) && !(y >= 7)");

    if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || !(y >= 7)))) {
        
        puts("is equivalent to ");
    
    } else {

        puts("its NOT equivalent to ");
    }

    puts("!((x < 5) && !(y >= 7))");
}