/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates a for loop. For loops are good for when you know
** exactly how many times you want it to loop.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int bacon;

    for(bacon=1; bacon<=10; bacon++){  // increment by 1 each time
        printf("Bacon is %d \n", bacon);
    }

    for(bacon=0; bacon<=100; bacon+=8){  // increment by 8 each time
        printf("Bacon is %d \n", bacon);
    }

    return 0;
}
