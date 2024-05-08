// sum all the odd numebers from 1 to 99
#include<stdio.h>

int main (void){

    unsigned int x = 1;

    unsigned int sum = 0;
    
    do {
        sum += x; //the sum variable stores and adds a new value of x each time

        x += 2; //it excludes even numbers because starting from 1 and adding 2 each time you get an odd number
    }
    while (x <= 99);//check the condition until it is no longer true

    printf("sum=%u\n", sum);//print the final value of sum once the loop is finished and the condition result is false

}
