/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates the use of arrays.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create an array of characters with the number of bytes in brackets
    // Note: spaces count as 1 and also don't forget the null terminator \0 at the end which counts as 1 also!

    char name[18] = "Peter Moldenhauer"; // list of characters named name that is 18 bytes of mem long
    printf("My name is %s\n", name);

    // access a specific element of the array
    name[2] = 'z';
    printf("My name is %s\n", name);

    // if you initialize an array right away, you don't need to type out the number of bytes
    char food[] = "bacon";
    printf("My favorite food is %s\n", food);

    // to assign a new value to an array you need to use the strcpy() function
    // this takes 2 pieces of information: 1) what array you want to change and 2) what string do you want to store in the array now
    strcpy(food, "tuna");
    printf("My favorite food is %s\n", food);

    return 0;
}
