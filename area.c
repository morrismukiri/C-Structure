/* 
 * File:   area.c
 * Author: morris
 *
 * Created on January 23, 2015, 5:44 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int option;
    printf("\tMenu\n\t____\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    scanf("%d", &option);
    if (option == 1) {//Area of circle
        float radius, area;
        printf("\n Enter Radius of the circle:");
        scanf("%f", &radius);
        area = M_PI * pow(radius, 2.0); //PI* R^2
        printf("\nArea of the circle is %.2f\n", area);

    } else if (option == 2) {//Area of Rectangle
        float width, length, area;
        printf("\n Enter width of the Rectangle:");
        scanf("%f", &width);
        printf("\n Enter length of the Rectangle:");
        scanf("%f", &length);

        area = width*length;
        printf("\nArea of the Rectangle is %.2f\n", area);

    } else {
        printf("Invalid choice");
    }




    return (EXIT_SUCCESS);
}

