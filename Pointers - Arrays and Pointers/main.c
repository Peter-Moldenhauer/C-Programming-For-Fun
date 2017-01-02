/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates the relationship between arrays and pointers.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int meatBalls[5] = {7, 9, 11, 13, 15};

    printf("Element \t Address \t Value \n");

    for(i=0; i<5; i++){
        printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
    }

    // array name is just pointer to first element in the array
    printf("\nmeatBalls \t\t %p \n", meatBalls);

    // dereference array name to get the value of the first element
    printf("\n*meatBalls \t\t %d \n", *meatBalls);

    // dereference to get the value of third element in array
    printf("\n*(meatBalls+2) \t\t %d \n", *(meatBalls+2));

    return 0;
}
