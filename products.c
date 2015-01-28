/* 
 * File:   products.c
 * Author: morris
 *
 * Created on January 28, 2015, 9:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float salesTotal=0,items[2],cost[2];
    int i;
    for (i=0;i<2;i++ ){
        printf("Enter The price of item %d: ",i+1);
        scanf("%f",&cost[i]);
         printf("Enter The Quantity of item %d: ",i+1);
        scanf("%f",&items[i]);
        salesTotal+=items[i]*cost[i];
       
    }
    printf("\nTotal for the sale is %.2f\n",salesTotal);
    
    return (EXIT_SUCCESS);
}

