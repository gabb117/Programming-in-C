#include<stdio.h>

int main (void){

    int count = 0;

    while (count < 3) {

    count++;
    
    printf("%s", "Enter the initial balance");

    int initBalance;

    scanf("%d", &initBalance);

    printf("%s", "Enter charges");

    int charges;

    scanf("%d", &charges);

    printf("%s", "Enter credits");

    int credits;

    scanf("%d", &credits);

    printf("%s", "Enter limits");

    int limits;

    scanf("%d", &limits);

    int newBalance = initBalance + credits - charges;

    printf("%s%d\n%s%d\n", "Limits: ", limits, "Balance: ", newBalance);

    if (newBalance > limits) {
        printf("%s", "Limit not exceeded");
    } else {
        printf("%s\n", "Limit exceeded");
    }
}

}
