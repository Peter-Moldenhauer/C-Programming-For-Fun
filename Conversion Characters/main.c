/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates conversion characters.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // With conversion characters, the second string (Peter) is substituted in for the %s
    // Note: %s is used for strings only!
    printf("%s is the best person ever\n", "Peter");

    // can use as many as you want
    printf("%s is the best %s %s\n", "Peter", "programmer", "ever");

    // %d means a while number or integer
    printf("I am %d years old.\n", 30);

    // use %f for floating point numbers
    printf("Pi begins with %.2f\n", 3.14); // put .2 inbetween the % and f to format to specific number of decimal digits

    return 0;
}
