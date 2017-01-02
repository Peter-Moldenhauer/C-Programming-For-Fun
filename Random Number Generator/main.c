/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates a random number generator with the rand function.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    // create a loop to print out a bunch of random numbers (not in any particular range)

    int i;
    int diceroll;
    for(i=0; i<5; i++){
        printf("%d \n", rand());
    }

    // loop to print out a random number within a specific range (such as for a dice roll)

    for(i=0; i<5; i++){
        diceroll = (rand()%6) + 1;
        printf("%d \n", diceroll);
    }

    return 0;
}
