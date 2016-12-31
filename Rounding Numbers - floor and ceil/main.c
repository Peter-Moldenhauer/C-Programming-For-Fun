/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates rounding numbers with floor() and ceil().
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    // whenever you are rounding numbers up/down you want to use floating point numbers

    float number1 = 9.65423;
    float number2 = 3.3;

    printf("Number1 is %.2f \n", floor(number1)); // rounds number down
    printf("Number2 is %.2f \n", floor(number2)); // rounds number down

    printf("Number1 is %.2f \n", ceil(number1)); // rounds number up
    printf("Number2 is %.2f \n", ceil(number2)); // rounds number down

    return 0;
}
