/* 
 * File:   circle.c
 * Author: morris
 *
 * Created on January 28, 2015, 12:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Make sure to load the math library when compiling (Gcc use -lm argument)
/*
 * 
 */
int main(int argc, char** argv) {
 float radius, area,perimeter;
        printf("\n Enter Radius of the circle:");
        scanf("%f", &radius);
        area = M_PI * pow(radius, 2.0); //PI* R^2
        printf("\nArea of the circle is %.2f\n", area);
        perimeter=2*M_PI * radius;
        printf("\nPerimeter of the circle is %.2f\n", perimeter);
    return (EXIT_SUCCESS);
}

