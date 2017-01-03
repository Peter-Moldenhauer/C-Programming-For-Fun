/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates the heap.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    // need to use 2 functions to use memory on the heap - malloc() and free()

    int * points; // pointer variable to store total points on a team

    // malloc means get (allocate) memory from the heap
    // the only parameter that malloc takes is how much memory do you need
    points = (int *) malloc(5 * sizeof(int)); // allocate enough memory for 5 integers
    // note: the (int *) is int type-cast pointer, or in other words store malloc in an int pointer

    // deallocate memory
    free(points);

    return 0;
}
