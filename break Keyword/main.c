/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates the break keyword. The break allows you to end a
** loop early. Can use a break with any type of loop.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int a;
    int howMany; // how many times user wants to loop
    int maxAmount = 10; // number of times to loop by default

    printf("How many times do youw ant this loop to iterate? (up to 10) ");
    scanf(" %d", &howMany);

    for(a = 1; a<=maxAmount; a++){

        printf("%d\n", a);

        if(a == howMany){
            break;
        }
    }

    return 0;
}
