/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates int and float arrays.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    // Example 1: Print out array elements with loop

    int i;
    int array1[4] = {7,9,43,21}; // initialize the array, note: int arrays do NOT have a null terminator 0 at end (thats just for strings and character arrays)

    // Print out the array using a loop
    for(i=0; i<4; i++){
        printf("Element %d: %d \n", i, array1[i]);
    }

    // Example 2: Initialize an array using a loop and calculate average of numbers in array

    int array2[5];
    int total = 0;

    for(i=0; i<5; i++){
        printf("Enter a number to be added to the array: \n");
        scanf(" %d", &array2[i]);
    }
    // loop through all of the numbers to calculate the average
    for(i=0; i<5; i++){
        total += array2[i];
    }
    // calculate average of array
    int average = total / 5;
    // print average to screen
    printf("\nThe average of the numbers in the array is: %d\n", average);


    return 0;
}
