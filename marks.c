/* 
 * File:   marks.c
 * Author: morris
 *
 * Created on January 23, 2015, 8:19 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int count, subjects;

    printf("How many subjects has the student done? : ");
    scanf("%d", &subjects);
    printf("Subjects %d", subjects);
    float scores[subjects];// not the best thing to do should be malloc.
    //printf("Size of scores is %d",sizeof(scores));
    for (count = 0; count <subjects; count++) {
        printf("\nEnter Marks for Subject %d: ", count+1);
        scanf("%f", &scores[count]);
    }
    //Sum them up
    int count2;
    float total=0, average=0;//initialize to 0
    for (count2 = 0; count2<subjects; count2++) {
        total += (float) scores[count2];
        //printf("%.2f\n",(float) scores[count2]);
    }
    average=total/ subjects;
    printf("Total=%.2f, Average= %.2f\n",total,average);  

    return (EXIT_SUCCESS);
}

