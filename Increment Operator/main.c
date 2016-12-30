/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates prefix and postfix increment operators.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10, answer = 0;
    answer = ++a * b;                // change (increment) value before completing the equation, so it becomes (6*10)
    printf("Answer: %d \n", answer); // This will give Answer == 60



    a = 5, b = 10, answer = 0; // reset the variables
    answer = a++ * b;                // run equation with current value (5) and then change value after equation
    printf("Answer: %d \n", answer); // This will give Answer == 50

    return 0;
}
