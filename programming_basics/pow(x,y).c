//example of computing application

#include<stdio.h>
#include<math.h>

int main (void) {

    double amount, capital = 1000;// start capital

    double rate = 0.05;// rate in % 

    unsigned int n; // number of the years

    printf("%4s", "Year");

    printf("%21s\n", "Amount on deposit");

    for ( n = 1; n <= 10; n++) {

    amount = capital * pow(1.0 + rate, n);//use pow function for operations with exponentials pow(x,y)

    printf("%4u%21.2f\n", n, amount);

    }
}