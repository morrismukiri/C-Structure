    /* 
     * File:   numberCount.c
     * Author: morris
     *
     * Created on January 25, 2015, 4:00 PM
     */

    #include <stdio.h>
    #include <stdlib.h>

    /*
     * 
     */
    int main(int argc, char** argv) {
        int count,sum;
        for(count=0; count<50; count++){// count 0-49
            sum+=count;
        }
        printf("The sum of numbers between 0-50 is %d\n",sum);    
        char wait[1];
        scanf("%s",&wait);
        return (EXIT_SUCCESS);
    }

