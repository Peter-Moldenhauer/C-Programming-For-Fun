/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates variables.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Cant start variables with numbers or underscore
    // Cant have spaces in variables
    // Cant have any weird symbols (& % $) in variables

    // to define a variable, first tell what type of data you want to use and then give it a name
    int age;
    age = 30; // could also use a mathmatical calculation here such as 2016 - 1986

    printf("I am %d years old.\n", age);

    return 0;
}
