/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates random access files in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    // w+ - open a file for writing first then read the file

    FILE * fPointer;
    fPointer = fopen("bacon.txt", "w+");  // append the bacon.txt file

    // write to file
    fputs("I am learning about files.", fPointer);

    // fseek() takes the file pointer (cursor in the file) and goes to a specific part in your file
    fseek(fPointer, 5, SEEK_SET);  // SEEK_SET means start from the beginning of the file (them move 5 spaces over)
    fputs("starting school today!", fPointer);

    fseek(fPointer, -6, SEEK_END);  // SEEK_EMD means start from the END of the file
    fputs("tomorrow!", fPointer);

    fclose(fPointer);

    return 0;
}
