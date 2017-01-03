/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates reading files in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("bacon.txt", "a");  // append the bacon.txt file

    // append mode (a) basically takes the file and moves the cursor to the end of the file
    fprintf(fPointer, "\n- BY: Peter Moldenhauer");

    fclose(fPointer);

    return 0;
}
