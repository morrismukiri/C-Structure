/* 
 * File:   play.c
 * Author: morris
 *
 * Created on March 16, 2015, 8:18 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int array[] = { 45, 67, 89 };
    int *array_ptr = array;
    printf(" first element: %i\n", *(array_ptr));
    printf("second element: %i\n", array_ptr++);
    printf(" third element: %i\n", array_ptr);
    char *txt="My pointer string";
    char txtArr[]="My array string";
    printf("\nchar array: %s",txtArr);
    printf("\n Pointer String: %s\n",txt);

    return (EXIT_SUCCESS);
}

