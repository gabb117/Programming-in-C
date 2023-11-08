#include<stdio.h>

int main (void) {
    
    int n = 1;

    while (n < 5) {
        printf("%d ", n++);
    }

}
// output 1 2 3 4

int main (void) {
    
    int n = 1;

    while (n < 100) {
        n++;
    }
    printf ("%d ", n);

}
// output 100