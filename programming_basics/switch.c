// A switch that calculate 1 of 3 case
#include<stdio.h>

int main (void) {

    float circle;

    unsigned int square;

    int side;

    float sphere;

    int radius;

    int enterNumber = 0;

    while (enterNumber <= 3) {

        puts("Enter 1 for circle's area, 2 for square's area, 3 for sphere's area:  ");

        scanf("%d", &enterNumber);

        
        switch (enterNumber) {

            case 1 : printf("Enter the radius's value of circle\n");

                scanf("%d", &radius);
            
                circle = 3.14 * radius;

                printf("The area is: %.2fcm^2\n", circle);

                break;

            case 2 : printf("Enter the side's value\n");
            
                scanf("%u", &side);

                square = side * side ;

                printf("The area is: %d cm^2", square);
            
                break;

            case 3 : printf("Enter the radius's value of the sphere\n");

                scanf("%d", &radius);

                sphere =  4 * 3.14 * radius;

                printf("The area of the sphere is: ");

                printf("%.2f\n cm^2", sphere);

                break;

            default : 
            
                printf("Invalid input!");

                break;
        }           

    }

}
//area of a circle: Area = 3.14159 * ((x) cm)^2
//area of a square: Area = ((x) cm) * ((x) cm)
//area of a sphere: Area = 4 * 3.14159 * (x) cm^2