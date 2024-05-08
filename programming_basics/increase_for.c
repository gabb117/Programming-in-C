#include <stdio.h>


// start increase from 1 to 100


int main (void) {

    for (unsigned int c = 1; c <= 100; ++c){
        printf("%u\n", c);
    }
    
    
} 
// start increase from 7 to 7 until reach the condition 77


int main (void) {

    for(unsigned int c = 7; c <= 77; c += 7) {

        printf("%u\n", c);

    }
} 
//  A sequence of values e.g. 2-5-8-11-14-17
//  Where 17 is set as the limit in the condition and every full number adds to three since there are three values ​​separating each number in the sequence


int main (void) {

    for(unsigned int c = 2; c <= 17; c +=3){

        printf("%u\n", c);
    }
} 

//Add all even integers from two to 100

int main(void){

    unsigned int c , sum = 0;

    for(c = 2; c <=100; c += 2) {

        sum += c;
    }

    printf("%u\n", sum);
}
