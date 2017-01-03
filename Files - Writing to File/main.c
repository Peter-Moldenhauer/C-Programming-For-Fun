/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates writing files in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    // sequential access file
    // w - write to file
    // r - read from file
    // a - append (add) to file

    FILE * fPointer;
    fPointer = fopen("bacon.txt", "w"); // create and open bacon.txt file and write (w) to the file
    // note: if this file doesnt exist, it will create the file for you

    // write to the file - fprintf() is how you write to a file
    fprintf(fPointer, "I am writing to a file here!\n");

    // whenever you are done with a file pointer you should close the file to free up memory
    fclose(fPointer);

    return 0;
}
