/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates a while loop.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example 1:
    int beef = 1;

    while(beef < 5){
        printf("beef is now %d \n", beef);
        beef++;
    }

    // Example 2:
    int day = 1;
    float amount = .01;

    while(day <= 31){
        printf("Day:%d \t Amount:$%.2f \n", day, amount);
        amount *= 2;
        day++;
    }

    return 0;
}
